/*
 * XREFs of xxxSetWindowData @ 0x1C008A238
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C0089C78 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00FB008 (xxxSetWindowLong.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000E488 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     IsWindowShellCloaked @ 0x1C0014650 (IsWindowShellCloaked.c)
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C003892C (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00389A0 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxClientWOWGetProcModule @ 0x1C004F8BC (xxxClientWOWGetProcModule.c)
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     GetCPD @ 0x1C0078B60 (GetCPD.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BFE0C (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C00FC888 (MapClientToServerPfn.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsParentBandValid @ 0x1C010F720 (IsParentBandValid.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C011ADAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C011BBA4 (ValidateOwnerDepth.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0124890 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     MapServerToClientPfn @ 0x1C01614A8 (MapServerToClientPfn.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // r11d
  __int64 v27; // r10
  __int64 CPD; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rax
  __int64 DesktopWindow; // rax
  struct tagWND *v36; // rbx
  __int64 v37; // r12
  bool v38; // zf
  struct tagWND *v39; // r13
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v44; // r15
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  struct tagWND *v49; // rcx
  int v50; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v52; // rcx
  unsigned int v53; // r8d
  __int128 *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned __int8 v63; // al
  char v64; // al
  signed __int32 v66[8]; // [rsp+0h] [rbp-A9h] BYREF
  unsigned __int64 **CurrentThread; // [rsp+20h] [rbp-89h]
  __int64 v68; // [rsp+28h] [rbp-81h] BYREF
  __int64 v69; // [rsp+30h] [rbp-79h] BYREF
  __int64 v70; // [rsp+38h] [rbp-71h]
  __int128 v71; // [rsp+40h] [rbp-69h] BYREF
  struct tagWND *v72; // [rsp+50h] [rbp-59h]
  __int128 v73; // [rsp+58h] [rbp-51h] BYREF
  __int64 v74; // [rsp+68h] [rbp-41h]
  __int128 v75; // [rsp+70h] [rbp-39h] BYREF
  __int64 v76; // [rsp+80h] [rbp-29h]
  _QWORD v77[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v78; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v79; // [rsp+B0h] [rbp+7h]
  __int64 v80[9]; // [rsp+B8h] [rbp+Fh] BYREF

  v4 = 0LL;
  CurrentThread = (unsigned __int64 **)KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v68 = gSmartObjNullRef;
  v69 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v69;
  v70 = 0LL;
  v76 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v73 = 0LL;
  if ( a2 == -40 )
  {
    if ( PsGetCurrentProcessWin32Process(v18) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v62 = *((_QWORD *)a1 + 5);
      v63 = *(_BYTE *)(v62 + 234);
      v23 = ((unsigned __int64)v63 >> 2) & 1;
      if ( a3 )
        v64 = v63 | 4;
      else
        v64 = v63 & 0xFB;
      *(_BYTE *)(v62 + 234) = v64;
      goto LABEL_103;
    }
    goto LABEL_97;
  }
  if ( a2 == -21 )
  {
    v61 = *((_QWORD *)a1 + 5);
    v23 = *(_QWORD *)(v61 + 216);
    *(_QWORD *)(v61 + 216) = a3;
    goto LABEL_103;
  }
  if ( ((a2 + 20) & 0xFFFFFFFB) == 0 )
  {
    v23 = (int)xxxSetWindowStyle(a1, a2, a3);
    goto LABEL_103;
  }
  switch ( a2 )
  {
    case -12:
      v59 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v59 + 31) & 0xC0) == 0x40 )
      {
        v23 = *((_QWORD *)a1 + 21);
        *(_QWORD *)(v59 + 152) = a3;
        *((_QWORD *)a1 + 21) = a3;
      }
      else
      {
        v60 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
        v23 = 0LL;
        if ( v60 )
          v23 = *v60;
        if ( a3 )
        {
          ValidateHmenu(a3);
          v70 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(&v68);
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v68) )
            v23 = 0LL;
          else
            LockWndMenuWorker(a1, 0LL, &v68);
        }
        else
        {
          UnlockWndMenuWorker(a1, 0);
        }
      }
      goto LABEL_103;
    case -8:
      DesktopWindow = GetDesktopWindow((__int64)a1);
      v36 = (struct tagWND *)*((_QWORD *)a1 + 13);
      v37 = DesktopWindow;
      *(_QWORD *)&v71 = DesktopWindow;
      v72 = v36;
      v38 = v36 == (struct tagWND *)DesktopWindow;
      if ( v36 == (struct tagWND *)DesktopWindow )
        v39 = (struct tagWND *)*((_QWORD *)a1 + 15);
      else
        v39 = v36;
      v40 = 120LL;
      if ( !v38 )
        v40 = 104LL;
      CurrentThread = (unsigned __int64 **)((char *)a1 + v40);
      v42 = ValidateHwnd(a3);
      if ( !v42 && a3 )
        goto LABEL_42;
      if ( v36 == (struct tagWND *)v37 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v41);
        if ( (unsigned int)ShouldSetNoOwner(CurrentProcessWin32Process, v42) )
          v42 = 0LL;
      }
      if ( !(unsigned int)IsParentBandValid(a1, v42) )
      {
LABEL_42:
        v21 = 87LL;
        goto LABEL_98;
      }
      if ( v42 && GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink), 1LL) )
        goto LABEL_97;
      v44 = (struct tagWND *)v71;
      if ( v36 == (struct tagWND *)v71 )
      {
        if ( !v42 )
          goto LABEL_55;
        if ( GetProp(v42, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink), 1LL) )
          goto LABEL_97;
      }
      if ( v42 )
      {
        v45 = *(_QWORD *)(v42 + 40);
        if ( *(char *)(v45 + 20) < 0 || *(char *)(v45 + 19) < 0 )
          goto LABEL_97;
      }
LABEL_55:
      if ( *CurrentThread )
        v23 = **CurrentThread;
      else
        v23 = 0LL;
      v46 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v73 = *(_QWORD *)(v46 + 416);
      *(_QWORD *)(v46 + 416) = &v73;
      *((_QWORD *)&v73 + 1) = v42;
      if ( v42 )
        HMLockObject(v42);
      if ( v72 != v44 )
      {
        v58 = -(__int64)(xxxSetParentWorker(a1, (struct tagWND *)v42, 0LL, 0) != 0LL);
        v23 &= v58;
        goto LABEL_84;
      }
      v47 = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)&v75 = *(_QWORD *)(v47 + 416);
      *(_QWORD *)(v47 + 416) = &v75;
      *((_QWORD *)&v75 + 1) = v39;
      if ( v39 )
        HMLockObject(v39);
      xxxHandleOwnerSwitch(a1, (struct tagWND *)v42, v39);
      v48 = IsParentBandValid(a1, v42);
      v49 = a1;
      if ( v48 && (v50 = ValidateOwnerDepth(a1, v42), v49 = a1, v50) )
      {
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) == 0 )
        {
          if ( !v42 )
          {
            HMAssignmentUnlock(CurrentThread);
            goto LABEL_74;
          }
          if ( (*(_BYTE *)(_HMPheFromObject(v42) + 25) & 1) == 0 )
          {
            v77[1] = v42;
            v79 = 0LL;
            v77[0] = CurrentThread;
            v78 = 0LL;
            HMAssignmentLock(v77);
            WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v42);
            v52 = a1;
            if ( WindowCloakStateComponentUIAware )
            {
              v53 = WindowCloakStateComponentUIAware;
              v54 = 0LL;
            }
            else
            {
              if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
              {
LABEL_74:
                v71 = *(_OWORD *)LockPointer(v80, (__int64)a1 + 120, *((_QWORD *)a1 + 15));
                HMAssignmentLock(&v71);
                xxxInheritWindowMonitor(a1, (__int64 *)v42, 0);
LABEL_82:
                ThreadUnlock1(v55);
LABEL_84:
                ThreadUnlock1(v58);
                goto LABEL_103;
              }
              v53 = 2;
              v54 = &v78;
              v52 = a1;
            }
            zzzSetWindowCompositionCloak((__int64)v52, v54, v53);
            goto LABEL_74;
          }
        }
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1233LL);
        if ( v42 && (*(_BYTE *)(_HMPheFromObject(v42) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1234LL);
      }
      else
      {
        xxxHandleOwnerSwitch(v49, v39, (struct tagWND *)v42);
        UserSetLastError(87LL, v56, v57);
      }
      v23 = 0LL;
      goto LABEL_82;
    case -6:
      v34 = *((_QWORD *)a1 + 5);
      v23 = *(_QWORD *)(v34 + 32);
      *(_QWORD *)(v34 + 32) = a3;
      goto LABEL_103;
    case -4:
      if ( PsGetCurrentProcessWin32Process(v18) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v24 = *((_QWORD *)a1 + 5);
        v25 = *(unsigned __int16 *)(v24 + 42);
        if ( (v25 & 0x8000u) == 0 )
        {
          v26 = *(unsigned __int8 *)(v24 + 18);
          if ( (v26 & 4) != 0 )
          {
            v23 = MapServerToClientPfn(*(_QWORD *)(v24 + 120), a4);
            if ( !v23 )
              goto LABEL_104;
            goto LABEL_26;
          }
          if ( (v25 & 0xFFFF2FFF) == 0x2A5 )
          {
            v23 = *(_QWORD *)(v24 + 120);
          }
          else
          {
            v23 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v24 + 120), a4);
            if ( v23 != v27 )
            {
LABEL_26:
              if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
              {
                v29 = HMValidateHandleNoRip(a3, 7);
                if ( v29 )
                {
                  v30 = *(_QWORD *)(v29 + 40);
                  a3 = *(_QWORD *)(v30 + 16);
                  a4 = *(_WORD *)(v30 + 24) & 2;
                }
              }
              v31 = MapClientToServerPfn(a3);
              if ( v31 )
              {
                SetOrClrWF(0, (__int64)a1, 0x208u, 1);
                SetOrClrWF(1, (__int64)a1, 0x204u, 1);
                *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v31;
                _InterlockedOr(v66, 0);
              }
              else
              {
                SetOrClrWF(a4 != 0, (__int64)a1, 0x208u, 1);
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                  SetOrClrWF(0, (__int64)a1, 0x204u, 1);
                v32 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
                *(_QWORD *)(v33 + 120) = v32;
                _InterlockedOr(v66, 0);
                *(_WORD *)(*((_QWORD *)a1 + 5) + 40LL) = xxxClientWOWGetProcModule(*(_QWORD *)(*((_QWORD *)a1 + 5)
                                                                                             + 120LL));
              }
              goto LABEL_103;
            }
          }
          if ( a4 != ((v26 >> 3) & 1) )
          {
            CPD = GetCPD((__int64)a1, 34 - (a4 != 0), v23);
            if ( CPD )
              v23 = CPD;
          }
          goto LABEL_26;
        }
      }
LABEL_97:
      v21 = 5LL;
      goto LABEL_98;
    case -2:
      v22 = *((_QWORD *)a1 + 5);
      v23 = *(_QWORD *)(v22 + 240);
      *(_QWORD *)(v22 + 240) = a3;
LABEL_103:
      v4 = v23;
      goto LABEL_104;
  }
  v21 = 1413LL;
LABEL_98:
  UserSetLastError(v21, v17, v19);
LABEL_104:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(&v68);
  return v4;
}
