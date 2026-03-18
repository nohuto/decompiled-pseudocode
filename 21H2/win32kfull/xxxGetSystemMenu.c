/*
 * XREFs of xxxGetSystemMenu @ 0x1C00BC098
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00BBFD0 (NtUserGetSystemMenu.c)
 * Callees:
 *     _DestroyMenu @ 0x1C0063B20 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0064708 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C006986C (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     DwmGetClassStyle @ 0x1C0098E00 (DwmGetClassStyle.c)
 *     GetpwndNotifypMenuState @ 0x1C00BAE40 (GetpwndNotifypMenuState.c)
 *     _GetSubMenu @ 0x1C00BC870 (_GetSubMenu.c)
 *     xxxLoadSysMenu @ 0x1C00BC940 (xxxLoadSysMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010E9D4 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

PVOID *__fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  PVOID *v5; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 SubMenu; // rax
  int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rbx
  void *v16; // rax
  PVOID *v17; // rcx
  PVOID *v18; // rdx
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v23[2]; // [rsp+50h] [rbp-20h] BYREF
  PVOID *v24; // [rsp+60h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, v4);
  if ( a2 )
  {
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v23)
      && *(_QWORD *)(*v23[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v23[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*v23[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(struct tagWND **)(*v23[0] + 80LL));
      v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v23[0] + 80LL) + 136LL) + 8LL) + 8LL);
      v14 = *v23[0];
      if ( *(_QWORD *)(*v23[0] + 80LL) )
      {
        v14 = *v23[0];
        v15 = **(_QWORD **)(*v23[0] + 80LL);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = (void *)ReferenceDwmApiPort(v14);
      DwmAsyncChildStyleChange(v16, v15, -26, v13);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v23)
      && (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v17 = v24;
      if ( !v24 )
        v17 = (PVOID *)*v23[0];
      DestroyMenu(v17);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==((__int64)v23)
          || (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v20);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
      goto LABEL_16;
    }
    if ( (unsigned int)IsWindowBeingDestroyed((__int64)a1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
    LockWndMenuWorker((__int64)a1, 1u, v23);
    v8 = *((_QWORD *)a1 + 20);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, v8);
    v9 = GetpwndNotifypMenuState((__int64)a1);
    if ( v9 )
      v10 = *v9;
    else
      v10 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v20, v10);
    if ( *(_QWORD *)v20[0] && (**(_DWORD **)v20[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v20[0] + 16LL) == a1 )
    {
      v18 = v24;
      if ( (**(_DWORD **)v20[0] & 4) != 0 )
      {
        if ( !v24 )
          v18 = (PVOID *)*v23[0];
        v19 = *(_QWORD *)v20[0] + 40LL;
      }
      else
      {
        if ( !v24 )
          v18 = (PVOID *)*v23[0];
        v19 = *(_QWORD *)v20[0] + 48LL;
      }
      v21[1] = v18;
      v21[0] = v19;
      HMAssignmentLock(v21, 0LL);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    SubMenu = GetSubMenu();
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v23, SubMenu);
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v23) )
    {
      *(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) |= 0x100u;
      v22[1] = a1;
      v22[0] = *v23[0] + 80LL;
      HMAssignmentLock(v22, 0LL);
    }
    if ( v24 )
      v5 = v24;
    else
      v5 = (PVOID *)*v23[0];
  }
LABEL_16:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v23);
  return v5;
}
