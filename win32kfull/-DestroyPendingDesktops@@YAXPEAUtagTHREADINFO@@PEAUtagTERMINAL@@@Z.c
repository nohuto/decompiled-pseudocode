/*
 * XREFs of ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC
 * Callers:
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094570 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     ?ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z @ 0x1C0016900 (-ClearWakeBit@@YAXPEAUtagTHREADINFO@@IH@Z.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     DwmAsyncShellWindowChange @ 0x1C007DD0C (DwmAsyncShellWindowChange.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C00929C4 (xxxCleanupMotherDesktopWindow.c)
 *     ?GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z @ 0x1C0095610 (-GetDesktopName@@YAPEBGPEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sq @ 0x1C0095678 (WPP_RECORDER_AND_TRACE_SF_Sq.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqS @ 0x1C0095C04 (WPP_RECORDER_AND_TRACE_SF_qqS.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C00A77C0 (_DestroyMenu.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     UnlockDesktopSysMenu @ 0x1C00F390C (UnlockDesktopSysMenu.c)
 *     UnlockDesktopMenu @ 0x1C00F3930 (UnlockDesktopMenu.c)
 *     RemoteDisableScreen @ 0x1C00F7460 (RemoteDisableScreen.c)
 */

void __fastcall DestroyPendingDesktops(struct tagTHREADINFO *a1, struct tagTERMINAL *a2)
{
  struct tagTERMINAL *v2; // r14
  struct tagTHREADINFO *v3; // r15
  int v4; // edx
  int v5; // r8d
  char *v6; // r12
  __int64 v7; // rdi
  char v8; // bl
  bool v9; // si
  const unsigned __int16 *DesktopName; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // r13
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct tagTHREADINFO *v17; // rsi
  _QWORD *i; // rdx
  _DWORD *v19; // r15
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 *v32; // rbx
  __int64 *v33; // rbx
  void *v34; // rcx
  __int64 v35; // r9
  struct tagDESKTOP *v36; // rbx
  char v37; // si
  bool v38; // r14
  const unsigned __int16 *v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rbx
  struct tagWND *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  char v49; // dl
  struct tagDESKTOP *v50; // rbx
  char v51; // si
  bool v52; // r14
  const unsigned __int16 *v53; // rax
  int v54; // r8d
  int v55; // edx
  char v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 **v63; // rax
  __int64 v64; // rbx
  void *v65; // rax
  __int64 v66; // rax
  int v67; // [rsp+28h] [rbp-A9h]
  int v68; // [rsp+30h] [rbp-A1h]
  int v69; // [rsp+38h] [rbp-99h]
  int v70; // [rsp+40h] [rbp-91h]
  _QWORD v71[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v72; // [rsp+78h] [rbp-59h]
  __int128 v73; // [rsp+80h] [rbp-51h] BYREF
  __int64 v74; // [rsp+90h] [rbp-41h]
  __int128 v75; // [rsp+98h] [rbp-39h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-29h]
  __int128 v77; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-11h]
  __int128 v79; // [rsp+C8h] [rbp-9h] BYREF
  __int64 v80; // [rsp+D8h] [rbp+7h]
  __int128 v81; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v82; // [rsp+F0h] [rbp+1Fh]

  v2 = a2;
  v3 = a1;
  SmartObjStackRefBase<tagMENU>::Init(v71, 0LL);
  v6 = (char *)v2 + 48;
  v7 = *((_QWORD *)v2 + 6);
  v82 = 0LL;
  v72 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v78 = 0LL;
  v81 = 0LL;
  v79 = 0LL;
  v73 = 0LL;
  v77 = 0LL;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v8 = 0;
      }
      v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        DesktopName = GetDesktopName((struct tagDESKTOP *)v7);
        LOBYTE(v11) = v9;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_Sq(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v11,
          (_DWORD)gFullLog,
          v67,
          v68,
          10,
          v70,
          (__int64)DesktopName,
          v7);
      }
      PushW32ThreadLock(v7, &v81, UserDereferenceObject);
      ObfReferenceObject((PVOID)v7);
      v13 = *(_QWORD *)(v7 + 40);
      PushW32ThreadLock(v13, &v79, UserDereferenceObject);
      v14 = *(void **)(v7 + 40);
      if ( v14 )
        ObfReferenceObject(v14);
      LockObjectAssignment(v6, *(_QWORD *)(v7 + 32));
      UnlockObjectAssignment(v7 + 32);
      if ( v7 == grpdeskRitInput )
        break;
      v17 = a1;
      if ( v7 == *((_QWORD *)a1 + 57) )
      {
        v57 = 0LL;
        v58 = grpWinStaList;
        if ( grpWinStaList )
        {
          v16 = 16LL;
          while ( (*(_DWORD *)(v58 + 64) & 0x10) != 0
               || *(struct tagTERMINAL **)(v58 + 56) != v2
               || !*(_QWORD *)(v58 + 16) )
          {
            v58 = *(_QWORD *)(v58 + 8);
            if ( !v58 )
              goto LABEL_123;
          }
          v57 = *(_QWORD *)(v58 + 16);
          do
          {
            if ( v57 != v7 )
              break;
            v57 = *(_QWORD *)(v57 + 32);
          }
          while ( v57 );
        }
LABEL_123:
        xxxSetThreadDesktop(0LL, v57, v16);
      }
LABEL_12:
      if ( v7 == gspdeskShouldBeForeground )
      {
        for ( i = *(_QWORD **)(v13 + 16); i && (i == gspdeskDisconnect || i == grpdeskLogon); i = (_QWORD *)i[4] )
          ;
        LockObjectAssignment(gspdeskShouldBeForeground, i);
      }
      v19 = (_DWORD *)*((_QWORD *)v17 + 57);
      v20 = *((_QWORD *)v17 + 74);
      PushW32ThreadLock(v19, &v77, UserDereferenceObject);
      if ( v19 )
        ObfReferenceObject(v19);
      xxxSetThreadDesktop(0LL, v7, v21);
      HMAssignmentUnlock(v7 + 88);
      HMAssignmentUnlock(v7 + 96);
      HMAssignmentUnlock(v7 + 184);
      v23 = *(_QWORD *)(v7 + 56);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFA3F;
      if ( v23 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v23);
        if ( UnlockDesktopSysMenu(v7 + 56) )
        {
          v59 = v72;
          if ( !v72 )
            v59 = *(_QWORD *)v71[0];
          DestroyMenu(v59);
        }
      }
      v24 = *(_QWORD *)(v7 + 64);
      if ( v24 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v24);
        if ( UnlockDesktopSysMenu(v7 + 64) )
        {
          v60 = v72;
          if ( !v72 )
            v60 = *(_QWORD *)v71[0];
          DestroyMenu(v60);
        }
      }
      v25 = *(_QWORD *)(v7 + 72);
      if ( v25 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v25);
        if ( UnlockDesktopMenu(v7 + 72) )
        {
          v61 = v72;
          if ( !v72 )
            v61 = *(_QWORD *)v71[0];
          DestroyMenu(v61);
        }
      }
      v26 = *(_QWORD *)(v7 + 80);
      if ( v26 )
      {
        v72 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v71, v26);
        if ( UnlockDesktopMenu(v7 + 80) )
        {
          v62 = v72;
          if ( !v72 )
            v62 = *(_QWORD *)v71[0];
          DestroyMenu(v62);
        }
      }
      v27 = *(_QWORD *)(v7 + 8);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 168);
        if ( v28 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(v28) )
          {
            v63 = *(__int64 ***)(v7 + 8);
            v64 = **v63;
            v65 = (void *)ReferenceDwmApiPort(*v63);
            DwmAsyncShellWindowChange(v65, 0LL, v64);
          }
          v66 = *(_QWORD *)(v7 + 8);
          *(_QWORD *)(*(_QWORD *)v66 + 24LL) = 0LL;
          HMAssignmentUnlock(v66 + 168);
        }
        v29 = (_QWORD *)(*(_QWORD *)(v7 + 8) + 184LL);
        if ( *v29 )
          HMAssignmentUnlock(v29);
        v30 = *(_QWORD **)(v7 + 8);
        if ( v30[24] )
        {
          *(_QWORD *)(*v30 + 32LL) = 0LL;
          HMAssignmentUnlock(v30 + 24);
        }
        v31 = *(_QWORD **)(v7 + 8);
        if ( v31[25] )
        {
          *(_QWORD *)(*v31 + 40LL) = 0LL;
          HMAssignmentUnlock(v31 + 25);
        }
      }
      v32 = *(__int64 **)(v7 + 104);
      if ( v32 && HMAssignmentUnlock(v7 + 104) )
        xxxDestroyWindow(v32);
      v33 = *(__int64 **)(v7 + 112);
      if ( v33 && HMAssignmentUnlock(v7 + 112) )
        xxxDestroyWindow(v33);
      v34 = *(void **)(v7 + 256);
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF) == 1 )
          Win32FreePool(v34);
        *(_QWORD *)(v7 + 256) = 0LL;
      }
      v35 = *((_QWORD *)v2 + 1);
      if ( !v35 || *(_QWORD *)(v35 + 24) != v7 )
        goto LABEL_51;
      if ( (*(_DWORD *)v2 & 2) != 0 )
      {
        v48 = grpWinStaList;
        if ( grpWinStaList )
        {
          while ( 1 )
          {
            v48 = *(_QWORD *)(v48 + 8);
            if ( !v48 )
              break;
            v36 = *(struct tagDESKTOP **)(v48 + 16);
            if ( v36 )
              goto LABEL_44;
          }
        }
LABEL_76:
        if ( v2 == (struct tagTERMINAL *)gTermIO[0] )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (v49 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v49 = 0;
          }
          if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v49,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              v35,
              4u,
              8u,
              0x10u,
              (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
          xxxCleanupMotherDesktopWindow((__int64)v2);
        }
        goto LABEL_51;
      }
      v36 = *(struct tagDESKTOP **)(v13 + 16);
      if ( !v36 )
        goto LABEL_76;
LABEL_44:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (v37 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = GetDesktopName(v36);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_qqS(
          WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v40,
          (_DWORD)gFullLog,
          v67,
          v68,
          v69,
          v70,
          *((_QWORD *)a2 + 1),
          (char)v36,
          (__int64)v39);
      }
      v2 = a2;
      LockObjectAssignment(*((_QWORD *)a2 + 1) + 24LL, v36);
      v17 = a1;
LABEL_51:
      v42 = *(_QWORD *)(v7 + 8);
      if ( v42 )
      {
        v43 = *(struct tagWND **)(v42 + 24);
        if ( v43 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0x10) != 0 )
          {
            *(_QWORD *)&v73 = *((_QWORD *)v17 + 52);
            *((_QWORD *)v17 + 52) = &v73;
            *((_QWORD *)&v73 + 1) = v43;
            HMLockObject(v43);
            xxxSetWindowPos(v43, 0LL, 0LL, 0LL, 0, 0, 1183);
            ThreadUnlock1(v45, v44, v46);
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
            || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v26) = 0;
          }
          if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v26,
              v22,
              (unsigned int)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
              4,
              8,
              18,
              (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
          }
          xxxDestroyWindow(*(__int64 **)(*(_QWORD *)(v7 + 8) + 24LL));
          if ( v7 == grpdeskRitInput )
          {
            *(_DWORD *)(v7 + 48) |= 1u;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
              || (v56 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              v56 = 0;
            }
            LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_q(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v56,
                v22,
                (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
                4u,
                8u,
                0x13u,
                (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
          }
          else
          {
            v47 = *(_QWORD *)(v7 + 8);
            *(_QWORD *)(*(_QWORD *)v47 + 8LL) = 0LL;
            HMAssignmentUnlock(v47 + 24);
          }
          *(_DWORD *)(v7 + 48) |= 2u;
        }
      }
      if ( (*(_DWORD *)v2 & 2) == 0 || !v19 || (v19[12] & 6) == 0 )
        xxxSetThreadDesktop(v20, (__int64)v19, v22);
      PopAndFreeW32ThreadLock(&v77);
      PopAndFreeW32ThreadLock(&v79);
      PopAndFreeW32ThreadLock(&v81);
      v3 = a1;
      v6 = (char *)v2 + 48;
      v7 = *((_QWORD *)v2 + 6);
      if ( !v7 )
        goto LABEL_67;
    }
    v75 = 0LL;
    v76 = 0LL;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        8,
        11,
        (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
    }
    if ( (*(_DWORD *)(v13 + 64) & 1) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (unsigned int)&WPP_GLOBAL_Control,
          4,
          8,
          12,
          (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
      }
      if ( gspdeskDisconnect
        && ((PVOID)v7 == grpdeskLogon || !grpdeskLogon || (*((_DWORD *)grpdeskLogon + 12) & 2) != 0) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_GLOBAL_Control,
            4,
            8,
            13,
            (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
        RemoteDisableScreen(grpdeskRitInput, v15, v16, gbDesktopLocked);
LABEL_108:
        v17 = a1;
        goto LABEL_12;
      }
      v50 = (struct tagDESKTOP *)grpdeskLogon;
    }
    else
    {
      v50 = *(struct tagDESKTOP **)(v13 + 16);
      if ( v50 == (struct tagDESKTOP *)v7 )
        v50 = *(struct tagDESKTOP **)(v7 + 32);
      if ( !v50 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (unsigned int)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
            4,
            8,
            14,
            (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
        }
        ClearWakeBit(v3, 15367, 0);
      }
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || (v51 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v51 = 0;
    }
    v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v53 = GetDesktopName(v50);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v51;
      WPP_RECORDER_AND_TRACE_SF_Sq(
        WPP_GLOBAL_Control->AttachedDevice,
        v55,
        v54,
        (_DWORD)gFullLog,
        v67,
        v68,
        15,
        v70,
        (__int64)v53,
        (char)v50);
    }
    PushW32ThreadLock(v50, &v75, UserDereferenceObject);
    if ( v50 )
      ObfReferenceObject(v50);
    xxxSwitchDesktop(v13, (__int64)v50, 0, 0);
    PopAndFreeW32ThreadLock(&v75);
    v2 = a2;
    goto LABEL_108;
  }
LABEL_67:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (unsigned int)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids,
      4,
      8,
      20,
      (__int64)&WPP_a5ab45ac81c5376cb65aab9e372e2957_Traceguids);
  }
  KeSetEvent(gpevtDesktopDestroyed, 1, 0);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v71);
}
