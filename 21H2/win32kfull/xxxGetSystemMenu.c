/*
 * XREFs of xxxGetSystemMenu @ 0x1C00DC8C4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00DC7F0 (NtUserGetSystemMenu.c)
 * Callees:
 *     xxxLoadSysMenu @ 0x1C0042E34 (xxxLoadSysMenu.c)
 *     _DestroyMenu @ 0x1C0048A30 (_DestroyMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00DCADC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     _GetSubMenu @ 0x1C00DCAFC (_GetSubMenu.c)
 *     GetpwndNotifypMenuState @ 0x1C00DCD44 (GetpwndNotifypMenuState.c)
 *     DwmGetClassStyle @ 0x1C00EA4A8 (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C011ADAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0124890 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  __int64 v25; // rcx
  struct _KTHREAD *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v41; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v43[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v45[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v46[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v48; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v47, 0LL);
  v4 = 0LL;
  v48 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v47);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v47, v5)
      && *(_QWORD *)(*(_QWORD *)v47[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v47[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v47[0] + 80LL)) & 0x200) != 0 )
    {
      DirtyVisRgnTrackers(*(struct tagWND **)(*(_QWORD *)v47[0] + 80LL));
      if ( *(_QWORD *)(*(_QWORD *)v47[0] + 80LL) )
        v21 = **(_QWORD **)(*(_QWORD *)v47[0] + 80LL);
      else
        v21 = 0LL;
      v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 80LL) + 136LL);
      v23 = *(_DWORD *)(*(_QWORD *)(v22 + 8) + 8LL);
      v24 = (void *)ReferenceDwmApiPort(v22, v20);
      DwmAsyncChildStyleChange(v24, v21, -26, v23);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v47)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v25 = v48;
      if ( !v48 )
        v25 = *(_QWORD *)v47[0];
      DestroyMenu(v25);
    }
    goto LABEL_14;
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v47)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 40LL) + 40LL) & 0x80u) == 0
    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) == 0 )
  {
LABEL_14:
    if ( *((_QWORD *)a1 + 20) )
    {
      GetSubMenu();
      v48 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v47);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v47, v18) )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47[0] + 40LL) + 40LL) |= 0x100u;
        v46[1] = a1;
        v46[0] = *(_QWORD *)v47[0] + 80LL;
        HMAssignmentLock(v46);
      }
      if ( v48 )
        v4 = v48;
      else
        v4 = *(_QWORD *)v47[0];
    }
    goto LABEL_19;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v43, 0LL);
  xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
  v48 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v47);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v47) )
  {
    LOBYTE(v6) = 1;
    LockWndMenuWorker(a1, v6, v47);
    v48 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v47);
    v8 = (__int64 *)GetpwndNotifypMenuState(a1);
    if ( v8 )
      v9 = *v8;
    else
      v9 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v43, v9);
    if ( *(_QWORD *)v43[0] )
    {
      v10 = *(_QWORD *)v43[0];
      if ( (**(_DWORD **)v43[0] & 8) == 0 )
      {
        v10 = *(_QWORD *)v43[0];
        if ( *(struct tagWND **)(*(_QWORD *)v43[0] + 16LL) == a1 )
        {
          v37 = v48;
          if ( (**(_DWORD **)v43[0] & 4) != 0 )
          {
            if ( !v48 )
              v37 = *(_QWORD *)v47[0];
            v44[1] = v37;
            v44[0] = *(_QWORD *)v43[0] + 40LL;
            v38 = v44;
          }
          else
          {
            if ( !v48 )
              v37 = *(_QWORD *)v47[0];
            v45[1] = v37;
            v45[0] = *(_QWORD *)v43[0] + 48LL;
            v38 = v45;
          }
          HMAssignmentLock(v38);
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v10)
      || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v41),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( v43[0] != gSmartObjNullRef && !--*(_DWORD *)(v43[0] + 8LL) )
    {
      if ( *(_BYTE *)(v43[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v43[0]);
    }
    v17 = *(_QWORD **)(v12 + 1472);
    if ( v17 )
      *(_QWORD *)(v12 + 1472) = *v17;
    goto LABEL_14;
  }
  v26 = KeGetCurrentThread();
  v27 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (v31 = PsGetCurrentProcess(v29, v28, v30),
        v32 = PsGetProcessSessionIdEx(v31),
        v34 = PsGetCurrentThreadProcess(v33),
        v32 == (unsigned int)PsGetProcessSessionIdEx(v34)) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v26);
    if ( v35 )
      v27 = *v35;
  }
  if ( v43[0] != gSmartObjNullRef && !--*(_DWORD *)(v43[0] + 8LL) )
  {
    if ( *(_BYTE *)(v43[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v43[0]);
  }
  v36 = *(_QWORD **)(v27 + 1472);
  if ( v36 )
    *(_QWORD *)(v27 + 1472) = *v36;
LABEL_19:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v47);
  return v4;
}
