#pragma once
/*
 *      Copyright (C) 2012-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "epg/EpgTypes.h"
#include "guilib/GUIDialog.h"

namespace PVR
{
  class CGUIDialogPVRGuideInfo : public CGUIDialog
  {
  public:
    CGUIDialogPVRGuideInfo(void);
    virtual ~CGUIDialogPVRGuideInfo(void);
    virtual bool OnMessage(CGUIMessage& message) override;
    virtual bool OnInfo(int actionID) override;
    virtual bool HasListItems() const override { return true; };
    virtual CFileItemPtr GetCurrentListItem(int offset = 0) override;

    void SetProgInfo(const CPVREpgInfoTagPtr &tag);

  protected:
    virtual void OnInitWindow() override;

    bool OnClickButtonOK(CGUIMessage &message);
    bool OnClickButtonRecord(CGUIMessage &message);
    bool OnClickButtonPlay(CGUIMessage &message);
    bool OnClickButtonFind(CGUIMessage &message);
    bool OnClickButtonAddTimer(CGUIMessage &message);
    bool OnClickButtonChannelGuide(CGUIMessage &message);

    CPVREpgInfoTagPtr m_progItem;
  };
}
