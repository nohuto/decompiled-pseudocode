__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 SubMenu; // rax
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v19, v4);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v19)
      && *(_QWORD *)(*(_QWORD *)v19[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v19[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v19[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v19[0] + 80LL));
      v13 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v13);
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu();
    }
  }
  else if ( ((unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19)
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, SysMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v19) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
      goto LABEL_16;
    }
    if ( (unsigned int)IsWindowBeingDestroyed(a1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 469LL);
    LOBYTE(v7) = 1;
    LockWndMenuWorker(a1, v7, v19);
    v8 = *((_QWORD *)a1 + 20);
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, v8);
    v9 = (__int64 *)GetpwndNotifypMenuState(a1);
    if ( v9 )
      v10 = *v9;
    else
      v10 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, v10);
    if ( *(_QWORD *)v16[0] && (**(_DWORD **)v16[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v16[0] + 16LL) == a1 )
    {
      v14 = v20;
      if ( (**(_DWORD **)v16[0] & 4) != 0 )
      {
        if ( !v20 )
          v14 = *(_QWORD *)v19[0];
        v15 = *(_QWORD *)v16[0] + 40LL;
      }
      else
      {
        if ( !v20 )
          v14 = *(_QWORD *)v19[0];
        v15 = *(_QWORD *)v16[0] + 48LL;
      }
      v17[1] = v14;
      v17[0] = v15;
      HMAssignmentLock(v17, 0LL);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    SubMenu = GetSubMenu();
    v20 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v19, SubMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v19) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v19[0] + 40LL) + 40LL) |= 0x100u;
      v18[1] = a1;
      v18[0] = *(_QWORD *)v19[0] + 80LL;
      HMAssignmentLock(v18, 0LL);
    }
    if ( v20 )
      v5 = v20;
    else
      v5 = *(_QWORD *)v19[0];
  }
LABEL_16:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  return v5;
}
