/*
 * XREFs of xxxSetWindowData @ 0x1C00CA930
 * Callers:
 *     xxxSetWindowLong @ 0x1C00C9D14 (xxxSetWindowLong.c)
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C00CA358 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000B40C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     GetCPD @ 0x1C000ECF4 (GetCPD.c)
 *     HMValidateHandleNoRip @ 0x1C00244B4 (HMValidateHandleNoRip.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00255B8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C002878C (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00AF33C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00B4970 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00C8060 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ValidateOwnerDepth @ 0x1C00C8100 (ValidateOwnerDepth.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     MapClientNeuterToClientPfn @ 0x1C00CAF2C (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C00CC3D0 (MapClientToServerPfn.c)
 *     IsParentBandValid @ 0x1C00CEF24 (IsParentBandValid.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00D0C30 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MapServerToClientPfn @ 0x1C024C854 (MapServerToClientPfn.c)
 */

unsigned __int64 __fastcall xxxSetWindowData(struct tagWND *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // r11d
  __int64 v24; // r10
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // ebx
  int v28; // ecx
  _DWORD *v29; // rax
  int v30; // ecx
  int v31; // edx
  int v32; // r8d
  int v33; // r12d
  int v34; // eax
  int v35; // ecx
  __int64 v36; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned __int8 v40; // al
  char v41; // al
  __int64 DesktopWindow; // rax
  struct tagWND *v43; // r12
  struct tagWND *v44; // rsi
  __int64 v45; // r13
  unsigned __int64 **v46; // r13
  __int64 v47; // rcx
  struct tagWND *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rax
  struct tagWND *v51; // r15
  int v52; // eax
  struct tagWND *v53; // rcx
  int v54; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // r8d
  const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *v66; // rdx
  __int64 v67; // rcx
  __int64 CPD; // rax
  __int64 v69; // rbx
  __int64 v70; // rcx
  void *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 *v74; // rax
  __int64 v75; // rax
  signed __int32 v76[8]; // [rsp+8h] [rbp-99h] BYREF
  int v77; // [rsp+28h] [rbp-79h]
  _QWORD *v78; // [rsp+30h] [rbp-71h] BYREF
  __int64 v79; // [rsp+38h] [rbp-69h] BYREF
  __int64 v80; // [rsp+40h] [rbp-61h]
  struct tagWND *v81; // [rsp+48h] [rbp-59h]
  int v82; // [rsp+50h] [rbp-51h]
  __int64 v83; // [rsp+58h] [rbp-49h]
  __int128 v84; // [rsp+68h] [rbp-39h] BYREF
  __int128 v85; // [rsp+78h] [rbp-29h] BYREF
  __int64 v86; // [rsp+88h] [rbp-19h]
  __int128 v87; // [rsp+90h] [rbp-11h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-1h]
  __int128 v89; // [rsp+A8h] [rbp+7h] BYREF
  __int64 v90; // [rsp+B8h] [rbp+17h]
  _QWORD v91[3]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v92; // [rsp+110h] [rbp+6Fh]

  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v78 = (_QWORD *)gSmartObjNullRef;
  v79 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v79;
  v80 = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v85 = 0LL;
  if ( a2 == -21 )
  {
    v36 = *((_QWORD *)a1 + 5);
    v13 = *(_QWORD *)(v36 + 216);
    *(_QWORD *)(v36 + 216) = a3;
    goto LABEL_9;
  }
  if ( a2 == -40 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v38 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v38 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v38 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v39 = *((_QWORD *)a1 + 5);
      v40 = *(_BYTE *)(v39 + 232);
      v13 = ((unsigned __int64)v40 >> 5) & 1;
      if ( a3 )
        v41 = v40 | 0x20;
      else
        v41 = v40 & 0xDF;
      *(_BYTE *)(v39 + 232) = v41;
      goto LABEL_9;
    }
    goto LABEL_129;
  }
  if ( a2 == -20 || (v77 = -16, a2 == -16) )
  {
    v13 = (int)xxxSetWindowStyle(a1);
    goto LABEL_9;
  }
  if ( a2 != -2 )
  {
    if ( a2 == -4 )
    {
      v18 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 488LL);
      if ( (v18 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1034LL);
      v19 = PsGetCurrentProcessWin32Process(v18);
      v20 = v19;
      if ( v19 )
        v20 = -(__int64)(*(_QWORD *)v19 != 0LL) & v19;
      if ( v20 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v21 = *((_QWORD *)a1 + 5);
        v22 = *(unsigned __int16 *)(v21 + 42);
        if ( (v22 & 0x8000u) == 0 )
        {
          v23 = *(unsigned __int8 *)(v21 + 18);
          if ( (v23 & 4) == 0 )
          {
            if ( (v22 & 0xFFFF2FFF) == 0x2A5 )
            {
              v13 = *(_QWORD *)(v21 + 120);
            }
            else
            {
              v13 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v21 + 120), a4);
              if ( v13 != v24 )
                goto LABEL_26;
            }
            if ( a4 != ((v23 >> 3) & 1) )
            {
              CPD = GetCPD((__int64)a1, 34 - (a4 != 0), v13);
              if ( CPD )
                v13 = CPD;
            }
LABEL_26:
            if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
            {
              v63 = HMValidateHandleNoRip(a3, 7);
              if ( v63 )
              {
                v64 = *(_QWORD *)(v63 + 40);
                a3 = *(_QWORD *)(v64 + 16);
                a4 = *(_WORD *)(v64 + 24) & 2;
              }
            }
            v25 = MapClientToServerPfn(a3);
            if ( v25 )
            {
              SetOrClrWF(0LL, a1, 520LL, 1LL);
              SetOrClrWF(1LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v25;
LABEL_36:
              _InterlockedOr(v76, 0);
              goto LABEL_9;
            }
            if ( a4 )
            {
              SetOrClrWF(1LL, a1, 520LL, 1LL);
              goto LABEL_33;
            }
            v26 = *((_QWORD *)a1 + 5);
            v27 = *(_DWORD *)(v26 + 28);
            v82 = *(_DWORD *)(v26 + 24);
            v28 = *(_DWORD *)(v26 + 232);
            *(_BYTE *)(v26 + 18) &= ~8u;
            LODWORD(v83) = v28;
            if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            {
LABEL_33:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                SetOrClrWF(0LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
              goto LABEL_36;
            }
            v29 = (_DWORD *)*((_QWORD *)a1 + 5);
            v30 = v29[7];
            v31 = v29[6];
            v32 = v29[58];
            v33 = v82 ^ v31;
            v34 = v83 ^ v32;
            v92 = v30;
            v35 = v27 ^ v30;
            LODWORD(v81) = v35;
            if ( !v35 )
            {
              if ( v33 )
              {
LABEL_97:
                if ( (v33 & 0x4E27A9) != 0 )
                {
                  v77 = -20;
                  v92 = v31;
                }
                else
                {
                  if ( (v34 & 0x12C0) == 0 )
                    goto LABEL_102;
                  v77 = -268435456;
                  v92 = v32;
                }
LABEL_101:
                DirtyVisRgnTrackers(a1);
                v69 = *(_QWORD *)a1;
                v71 = (void *)ReferenceDwmApiPort(v70);
                DwmAsyncChildStyleChange(v71, v69, v77, v92);
LABEL_102:
                if ( (v33 & 0x200A0381) != 0 || ((unsigned int)v81 & 0xC40000) != 0 )
                  WindowMargins::CheckForChanges(a1, 1LL);
                goto LABEL_33;
              }
              if ( !v34 )
                goto LABEL_33;
            }
            if ( (v35 & 0xB1CF0000) != 0 )
              goto LABEL_101;
            goto LABEL_97;
          }
          v13 = MapServerToClientPfn(*(_QWORD *)(v21 + 120), a4);
          if ( v13 )
            goto LABEL_26;
LABEL_89:
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v78);
          return 0LL;
        }
      }
      goto LABEL_129;
    }
    if ( a2 != -8 )
    {
      if ( a2 == -12 )
      {
        v73 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v73 + 31) & 0xC0) == 0x40 )
        {
          v13 = *(_QWORD *)(v73 + 320);
          *(_QWORD *)(v73 + 320) = a3;
        }
        else
        {
          v74 = (unsigned __int64 *)*((_QWORD *)a1 + 21);
          v13 = 0LL;
          if ( v74 )
            v13 = *v74;
          if ( a3 )
          {
            v75 = ValidateHmenu(a3);
            v80 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(&v78, v75);
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v78) )
            {
              v13 = 0LL;
            }
            else
            {
              if ( (unsigned int)IsWindowBeingDestroyed(a1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1008LL);
              LockWndMenuWorker((__int64)a1, 0, &v78);
            }
          }
          else
          {
            UnlockWndMenuWorker(a1, 0);
          }
        }
        goto LABEL_9;
      }
      if ( a2 == -6 )
      {
        v72 = *((_QWORD *)a1 + 5);
        v13 = *(_QWORD *)(v72 + 32);
        *(_QWORD *)(v72 + 32) = a3;
        goto LABEL_9;
      }
      v67 = 1413LL;
      goto LABEL_88;
    }
    DesktopWindow = GetDesktopWindow(a1, v10);
    v43 = (struct tagWND *)*((_QWORD *)a1 + 13);
    v44 = (struct tagWND *)DesktopWindow;
    v83 = DesktopWindow;
    if ( v43 == (struct tagWND *)DesktopWindow )
      v81 = (struct tagWND *)*((_QWORD *)a1 + 15);
    else
      v81 = v43;
    v45 = 120LL;
    if ( v43 != (struct tagWND *)DesktopWindow )
      v45 = 104LL;
    v46 = (unsigned __int64 **)((char *)a1 + v45);
    v48 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v48 && a3 )
      goto LABEL_87;
    if ( v43 == v44 )
    {
      v49 = PsGetCurrentProcessWin32Process(v47);
      if ( v49 )
        v49 &= -(__int64)(*(_QWORD *)v49 != 0LL);
      if ( (unsigned int)ShouldSetNoOwner(v49, v48) )
        v48 = 0LL;
    }
    if ( !(unsigned int)IsParentBandValid(a1, v48) )
    {
LABEL_87:
      v67 = 87LL;
LABEL_88:
      UserSetLastError(v67);
      goto LABEL_89;
    }
    if ( !v48
      || !GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), 1LL)
      && (v43 != v44 || !GetProp(v48, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), 1LL))
      && (v50 = *((_QWORD *)v48 + 5), *(char *)(v50 + 20) >= 0)
      && *(char *)(v50 + 19) >= 0 )
    {
      if ( *v46 )
        v13 = **v46;
      else
        v13 = 0LL;
      ThreadLock(v48, &v85);
      if ( v43 != (struct tagWND *)v83 )
      {
        v61 = -(__int64)(xxxSetParentWorker(a1, v48, 0LL, 0) != 0LL);
        v13 &= v61;
        goto LABEL_76;
      }
      v51 = v81;
      ThreadLock(v81, &v87);
      xxxHandleOwnerSwitch(a1, v48, v51);
      v52 = IsParentBandValid(a1, v48);
      v53 = a1;
      if ( !v52 || (LOBYTE(v54) = ValidateOwnerDepth((__int64)a1, (__int64)v48), v53 = a1, !v54) )
      {
        xxxHandleOwnerSwitch(v53, v51, v48);
        UserSetLastError(87LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
        goto LABEL_110;
      if ( !v48 )
      {
        HMAssignmentUnlock(v46);
        goto LABEL_74;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(v48) + 25) & 1) != 0 )
      {
LABEL_110:
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1270LL);
        if ( v48 && (*(_BYTE *)(_HMPheFromObject(v48) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1271LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      *(_QWORD *)&v84 = v46;
      *((_QWORD *)&v84 + 1) = v48;
      v90 = 0LL;
      v89 = 0LL;
      HMAssignmentLock(&v84, 0LL);
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v48);
      v56 = a1;
      if ( WindowCloakStateComponentUIAware )
      {
        v65 = WindowCloakStateComponentUIAware;
        v66 = 0LL;
      }
      else
      {
        if ( !(unsigned int)IsWindowShellCloaked(a1, 1) )
        {
LABEL_74:
          v84 = *(_OWORD *)LockPointer(v91, (__int64)a1 + 120, *((_QWORD *)a1 + 15));
          HMAssignmentLock(&v84, 0LL);
          xxxInheritWindowMonitor(a1);
LABEL_75:
          ThreadUnlock1(v58, v57, v59);
LABEL_76:
          ThreadUnlock1(v61, v60, v62);
          goto LABEL_9;
        }
        v65 = 2;
        v66 = (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v89;
        v56 = a1;
      }
      zzzSetWindowCompositionCloak(v56, v66, v65);
      goto LABEL_74;
    }
LABEL_129:
    v67 = 5LL;
    goto LABEL_88;
  }
  v12 = *((_QWORD *)a1 + 5);
  v13 = *(_QWORD *)(v12 + 240);
  *(_QWORD *)(v12 + 240) = a3;
LABEL_9:
  v14 = 0LL;
  v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v15 )
    v14 = *v15;
  if ( v78 != (_QWORD *)gSmartObjNullRef && !--*((_DWORD *)v78 + 2) )
  {
    if ( *((_BYTE *)v78 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v78);
  }
  v16 = *(_QWORD **)(v14 + 1512);
  if ( v16 )
    *(_QWORD *)(v14 + 1512) = *v16;
  return v13;
}
