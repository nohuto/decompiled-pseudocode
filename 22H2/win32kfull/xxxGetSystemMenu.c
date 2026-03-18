/*
 * XREFs of xxxGetSystemMenu @ 0x1C0067088
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C006AFF0 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C005A604 (DwmGetClassStyle.c)
 *     _DestroyMenu @ 0x1C0061170 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C006272C (xxxLoadSysMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C006345C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _GetSubMenu @ 0x1C0066FE8 (_GetSubMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00AF33C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00B4970 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     GetpwndNotifypMenuState @ 0x1C00C8C08 (GetpwndNotifypMenuState.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int8 *SysMenu; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 SubMenu; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v22, v4);
  if ( a2 )
  {
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v22)
      && *(_QWORD *)(*(_QWORD *)v22[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v22[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v22[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(_QWORD *)(*(_QWORD *)v22[0] + 80LL));
      v14 = *(_QWORD *)v22[0];
      if ( *(_QWORD *)(*(_QWORD *)v22[0] + 80LL) )
        v14 = *(_QWORD *)v22[0];
      v15 = (void *)ReferenceDwmApiPort(v14);
      DwmAsyncChildStyleChange(v15);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v22)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v16 = v23;
      if ( !v23 )
        v16 = *(_QWORD *)v22[0];
      DestroyMenu(v16);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==((__int64)v22)
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v22, SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v22) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
      goto LABEL_16;
    }
    if ( (unsigned int)IsWindowBeingDestroyed(a1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 469LL);
    LOBYTE(v7) = 1;
    LockWndMenuWorker(a1, v7, v22);
    v8 = *((_QWORD *)a1 + 20);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v22, v8);
    v9 = (__int64 *)GetpwndNotifypMenuState(a1);
    if ( v9 )
      v10 = *v9;
    else
      v10 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v10);
    if ( *(_QWORD *)v19[0] && (**(_DWORD **)v19[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v19[0] + 16LL) == a1 )
    {
      v17 = v23;
      if ( (**(_DWORD **)v19[0] & 4) != 0 )
      {
        if ( !v23 )
          v17 = *(_QWORD *)v22[0];
        v18 = *(_QWORD *)v19[0] + 40LL;
      }
      else
      {
        if ( !v23 )
          v17 = *(_QWORD *)v22[0];
        v18 = *(_QWORD *)v19[0] + 48LL;
      }
      v20[1] = v17;
      v20[0] = v18;
      HMAssignmentLock(v20, 0LL);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
  }
  v11 = *((_QWORD *)a1 + 20);
  if ( v11 )
  {
    SubMenu = GetSubMenu(v11);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v22, SubMenu);
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v22) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 40LL) + 40LL) |= 0x100u;
      v21[1] = a1;
      v21[0] = *(_QWORD *)v22[0] + 80LL;
      HMAssignmentLock(v21, 0LL);
    }
    if ( v23 )
      v5 = v23;
    else
      v5 = *(_QWORD *)v22[0];
  }
LABEL_16:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
  return v5;
}
