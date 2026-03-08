/*
 * XREFs of xxxSetWindowData @ 0x1C002F9C8
 * Callers:
 *     ?xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z @ 0x1C002F618 (-xxxSetWindowLongPtr@@YA_KPEAUtagWND@@H_KHH@Z.c)
 *     xxxSetWindowLong @ 0x1C00C9054 (xxxSetWindowLong.c)
 * Callees:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C000A7BC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     GetCPD @ 0x1C000DFB4 (GetCPD.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0026FE8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     ?GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z @ 0x1C0028F20 (-GetWindowCloakStateComponentUIAware@@YAKQEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     DwmAsyncChildStyleChange @ 0x1C002E648 (DwmAsyncChildStyleChange.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     MapClientNeuterToClientPfn @ 0x1C002FFC4 (MapClientNeuterToClientPfn.c)
 *     MapClientToServerPfn @ 0x1C0031460 (MapClientToServerPfn.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     IsParentBandValid @ 0x1C0039C20 (IsParentBandValid.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ValidateOwnerDepth @ 0x1C00DDC94 (ValidateOwnerDepth.c)
 *     ?IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z @ 0x1C00E68D0 (-IsWindowShellCloaked@@YAHQEAUtagWND@@H@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E79FC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C00EC914 (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     MapServerToClientPfn @ 0x1C024F514 (MapServerToClientPfn.c)
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
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // r11d
  __int64 v25; // r10
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // ebx
  int v29; // ecx
  _DWORD *v30; // rax
  int v31; // ecx
  int v32; // edx
  int v33; // r8d
  int v34; // r12d
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int8 v41; // al
  char v42; // al
  __int64 DesktopWindow; // rax
  struct tagWND *v44; // r12
  struct tagWND *v45; // rsi
  __int64 v46; // r13
  unsigned __int64 **v47; // r13
  __int64 v48; // rcx
  struct tagWND *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  struct tagWND *v52; // r15
  int v53; // eax
  struct tagWND *v54; // rcx
  int v55; // eax
  unsigned int WindowCloakStateComponentUIAware; // eax
  struct tagWND *v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // r8d
  const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *v67; // rdx
  __int64 v68; // rcx
  __int64 CPD; // rax
  __int64 v70; // rbx
  void *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 *v74; // rax
  __int64 v75; // rax
  signed __int32 v76[8]; // [rsp+8h] [rbp-99h] BYREF
  int v77; // [rsp+28h] [rbp-79h]
  __int64 v78; // [rsp+30h] [rbp-71h] BYREF
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
  v78 = gSmartObjNullRef;
  v79 = *(_QWORD *)(v5 + 1512);
  *(_QWORD *)(v5 + 1512) = &v79;
  v80 = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v85 = 0LL;
  if ( a2 == -21 )
  {
    v37 = *((_QWORD *)a1 + 5);
    v13 = *(_QWORD *)(v37 + 216);
    *(_QWORD *)(v37 + 216) = a3;
    goto LABEL_9;
  }
  if ( a2 == -40 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v39 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v39 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v39 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
    {
      v40 = *((_QWORD *)a1 + 5);
      v41 = *(_BYTE *)(v40 + 232);
      v13 = ((unsigned __int64)v41 >> 5) & 1;
      if ( a3 )
        v42 = v41 | 0x20;
      else
        v42 = v41 & 0xDF;
      *(_BYTE *)(v40 + 232) = v42;
      goto LABEL_9;
    }
    goto LABEL_129;
  }
  if ( a2 == -20 || (v77 = -16, a2 == -16) )
  {
    v13 = (int)xxxSetWindowStyle(a1, a2, a3);
    goto LABEL_9;
  }
  if ( a2 != -2 )
  {
    if ( a2 == -4 )
    {
      v18 = *(unsigned int *)(*((_QWORD *)a1 + 2) + 488LL);
      if ( (v18 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1004LL);
      v19 = PsGetCurrentProcessWin32Process(v18);
      v21 = v19;
      if ( v19 )
      {
        v20 = -(__int64)(*(_QWORD *)v19 != 0LL);
        v21 = v20 & v19;
      }
      if ( v21 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) )
      {
        v22 = *((_QWORD *)a1 + 5);
        v23 = *(unsigned __int16 *)(v22 + 42);
        if ( (v23 & 0x8000u) == 0 )
        {
          v24 = *(unsigned __int8 *)(v22 + 18);
          if ( (v24 & 4) == 0 )
          {
            if ( (v23 & 0xFFFF2FFF) == 0x2A5 )
            {
              v13 = *(_QWORD *)(v22 + 120);
            }
            else
            {
              v13 = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), *(_QWORD *)(v22 + 120), a4);
              if ( v13 != v25 )
                goto LABEL_26;
            }
            if ( a4 != ((v24 >> 3) & 1) )
            {
              CPD = GetCPD((__int64)a1, 34 - (a4 != 0), v13);
              if ( CPD )
                v13 = CPD;
            }
LABEL_26:
            if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
            {
              LOBYTE(v20) = 7;
              v64 = HMValidateHandleNoRip(a3, v20);
              if ( v64 )
              {
                v65 = *(_QWORD *)(v64 + 40);
                a3 = *(_QWORD *)(v65 + 16);
                a4 = *(_WORD *)(v65 + 24) & 2;
              }
            }
            v26 = MapClientToServerPfn(a3);
            if ( v26 )
            {
              SetOrClrWF(0LL, a1, 520LL, 1LL);
              SetOrClrWF(1LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = v26;
LABEL_36:
              _InterlockedOr(v76, 0);
              goto LABEL_9;
            }
            if ( a4 )
            {
              SetOrClrWF(1LL, a1, 520LL, 1LL);
              goto LABEL_33;
            }
            v27 = *((_QWORD *)a1 + 5);
            v28 = *(_DWORD *)(v27 + 28);
            v82 = *(_DWORD *)(v27 + 24);
            v29 = *(_DWORD *)(v27 + 232);
            *(_BYTE *)(v27 + 18) &= ~8u;
            LODWORD(v83) = v29;
            if ( !(unsigned int)IsWindowDesktopComposed(a1) )
            {
LABEL_33:
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 4) != 0 )
                SetOrClrWF(0LL, a1, 516LL, 1LL);
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 120LL) = MapClientNeuterToClientPfn(*((_QWORD *)a1 + 17), a3, a4);
              goto LABEL_36;
            }
            v30 = (_DWORD *)*((_QWORD *)a1 + 5);
            v31 = v30[7];
            v32 = v30[6];
            v33 = v30[58];
            v34 = v82 ^ v32;
            v35 = v83 ^ v33;
            v92 = v31;
            v36 = v28 ^ v31;
            LODWORD(v81) = v36;
            if ( !v36 )
            {
              if ( v34 )
              {
LABEL_97:
                if ( (v34 & 0x4E27A9) != 0 )
                {
                  v77 = -20;
                  v92 = v32;
                }
                else
                {
                  if ( (v35 & 0x12C0) == 0 )
                    goto LABEL_102;
                  v77 = -268435456;
                  v92 = v33;
                }
LABEL_101:
                DirtyVisRgnTrackers(a1);
                v70 = *(_QWORD *)a1;
                v71 = (void *)ReferenceDwmApiPort();
                DwmAsyncChildStyleChange(v71, v70, v77, v92);
LABEL_102:
                if ( (v34 & 0x200A0381) != 0 || ((unsigned int)v81 & 0xC40000) != 0 )
                  WindowMargins::CheckForChanges(a1, 1LL);
                goto LABEL_33;
              }
              if ( !v35 )
                goto LABEL_33;
            }
            if ( (v36 & 0xB1CF0000) != 0 )
              goto LABEL_101;
            goto LABEL_97;
          }
          v13 = MapServerToClientPfn(*(_QWORD *)(v22 + 120), a4);
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
            if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v78) )
            {
              v13 = 0LL;
            }
            else
            {
              if ( (unsigned int)IsWindowBeingDestroyed(a1) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 978LL);
              LockWndMenuWorker(a1, 0LL, &v78);
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
      v68 = 1413LL;
      goto LABEL_88;
    }
    DesktopWindow = GetDesktopWindow(a1, v10);
    v44 = (struct tagWND *)*((_QWORD *)a1 + 13);
    v45 = (struct tagWND *)DesktopWindow;
    v83 = DesktopWindow;
    if ( v44 == (struct tagWND *)DesktopWindow )
      v81 = (struct tagWND *)*((_QWORD *)a1 + 15);
    else
      v81 = v44;
    v46 = 120LL;
    if ( v44 != (struct tagWND *)DesktopWindow )
      v46 = 104LL;
    v47 = (unsigned __int64 **)((char *)a1 + v46);
    v49 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v49 && a3 )
      goto LABEL_87;
    if ( v44 == v45 )
    {
      v50 = PsGetCurrentProcessWin32Process(v48);
      if ( v50 )
        v50 &= -(__int64)(*(_QWORD *)v50 != 0LL);
      if ( (unsigned int)ShouldSetNoOwner(v50, v49) )
        v49 = 0LL;
    }
    if ( !(unsigned int)IsParentBandValid(a1, v49) )
    {
LABEL_87:
      v68 = 87LL;
LABEL_88:
      UserSetLastError(v68);
      goto LABEL_89;
    }
    if ( !v49
      || !GetProp((__int64)a1, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1u)
      && (v44 != v45 || !GetProp((__int64)v49, WORD2(WPP_MAIN_CB.SecurityDescriptor), 1u))
      && (v51 = *((_QWORD *)v49 + 5), *(char *)(v51 + 20) >= 0)
      && *(char *)(v51 + 19) >= 0 )
    {
      if ( *v47 )
        v13 = **v47;
      else
        v13 = 0LL;
      ThreadLock(v49, &v85);
      if ( v44 != (struct tagWND *)v83 )
      {
        v62 = -(__int64)(xxxSetParentWorker(a1, v49, 0LL, 0) != 0LL);
        v13 &= v62;
        goto LABEL_76;
      }
      v52 = v81;
      ThreadLock(v81, &v87);
      xxxHandleOwnerSwitch(a1, v49, v52);
      v53 = IsParentBandValid(a1, v49);
      v54 = a1;
      if ( !v53 || (v55 = ValidateOwnerDepth(a1, v49), v54 = a1, !v55) )
      {
        xxxHandleOwnerSwitch(v54, v52, v49);
        UserSetLastError(87LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
        goto LABEL_110;
      if ( !v49 )
      {
        HMAssignmentUnlock(v47);
        goto LABEL_74;
      }
      if ( (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
      {
LABEL_110:
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1240LL);
        if ( v49 && (*(_BYTE *)(_HMPheFromObject(v49) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1241LL);
        v13 = 0LL;
        goto LABEL_75;
      }
      *(_QWORD *)&v84 = v47;
      *((_QWORD *)&v84 + 1) = v49;
      v90 = 0LL;
      v89 = 0LL;
      HMAssignmentLock(&v84, 0LL);
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v49);
      v57 = a1;
      if ( WindowCloakStateComponentUIAware )
      {
        v66 = WindowCloakStateComponentUIAware;
        v67 = 0LL;
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
          ThreadUnlock1(v59, v58, v60);
LABEL_76:
          ThreadUnlock1(v62, v61, v63);
          goto LABEL_9;
        }
        v66 = 2;
        v67 = (const struct tagWINDOWCOMPOSITIONATTRIBDATA_UNION *)&v89;
        v57 = a1;
      }
      zzzSetWindowCompositionCloak(v57, v67, v66);
      goto LABEL_74;
    }
LABEL_129:
    v68 = 5LL;
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
  if ( v78 != gSmartObjNullRef && !--*(_DWORD *)(v78 + 8) )
  {
    if ( *(_BYTE *)(v78 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v78);
  }
  v16 = *(_QWORD **)(v14 + 1512);
  if ( v16 )
    *(_QWORD *)(v14 + 1512) = *v16;
  return v13;
}
