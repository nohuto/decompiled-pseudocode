void __fastcall xxxDisplayDiagBlackScreenDetected(int a1, char a2, char a3, UUID *a4, int *a5)
{
  char v5; // r15
  char v6; // r12
  int v7; // edi
  UUID *v8; // r13
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v18; // rax
  struct tagTHREADINFO **v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v26; // rbx
  struct _LIST_ENTRY *QuadPart; // rsi
  int v28; // r8d
  bool v29; // zf
  struct tagTHREADINFO *v30; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v32; // rax
  __int64 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // ebx
  UUID *p_Uuid; // rax
  UUID v40; // xmm6
  PEPROCESS ThreadProcess; // rax
  int ProcessImageFileName; // eax
  __int64 v43; // r9
  PVOID v44; // rdx
  __int64 v45; // rcx
  unsigned __int64 v46; // r8
  LARGE_INTEGER *v47; // rbx
  __int64 v48; // rax
  struct tagTHREADINFO **v49; // r14
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdi
  LARGE_INTEGER v55; // rax
  __int64 v56; // rbx
  struct _LIST_ENTRY *v57; // rsi
  int v58; // r8d
  struct tagTHREADINFO *v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r9
  int v69; // r15d
  PVOID v70; // rdx
  __int64 v71; // rcx
  unsigned __int64 v72; // r8
  LARGE_INTEGER *v73; // rbx
  __int64 v74; // rax
  struct tagTHREADINFO **v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdi
  LARGE_INTEGER v81; // rax
  __int64 v82; // rbx
  struct _LIST_ENTRY *v83; // rsi
  int v84; // r8d
  struct tagTHREADINFO *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  int v94; // ebx
  UUID *v95; // rax
  UUID v96; // xmm6
  PEPROCESS v97; // rax
  int v98; // eax
  int v99; // r15d
  __int64 v100; // r9
  PVOID v101; // rdx
  __int64 v102; // rcx
  unsigned __int64 v103; // r8
  LARGE_INTEGER *v104; // rbx
  __int64 v105; // rax
  struct tagTHREADINFO **v106; // r14
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rdi
  LARGE_INTEGER v112; // rsi
  __int64 v113; // rbx
  UserCritTelemetry *v114; // rcx
  int v115; // r8d
  struct tagTHREADINFO *v116; // rbx
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 *v120; // rbx
  char *v121; // rbx
  __int64 v122; // rcx
  int v123; // r8d
  __int64 v124; // r9
  PLARGE_INTEGER Timeout; // [rsp+28h] [rbp-E0h]
  PLARGE_INTEGER Timeouta; // [rsp+28h] [rbp-E0h]
  bool v130; // [rsp+85h] [rbp-83h] BYREF
  __int16 v131; // [rsp+86h] [rbp-82h] BYREF
  __int16 v132[2]; // [rsp+88h] [rbp-80h] BYREF
  int v133; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v134; // [rsp+90h] [rbp-78h] BYREF
  int v135; // [rsp+94h] [rbp-74h] BYREF
  int v136; // [rsp+98h] [rbp-70h] BYREF
  int v137; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v138; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v139; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v140; // [rsp+B0h] [rbp-58h] BYREF
  void *v141[2]; // [rsp+C0h] [rbp-48h]
  UUID *v142; // [rsp+D0h] [rbp-38h]
  char *v143; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v144; // [rsp+E0h] [rbp-28h]
  UUID v145; // [rsp+E8h] [rbp-20h] BYREF
  UUID v146; // [rsp+F8h] [rbp-10h] BYREF
  UUID Uuid; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v148[10]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v149; // [rsp+168h] [rbp+60h] BYREF

  v5 = a2;
  v6 = a3;
  v7 = a1;
  v142 = a4;
  v8 = a4;
  memset(v148, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v148[1]);
  v148[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v148[3]) = 15;
  LOBYTE(v148[6]) = -1;
  LODWORD(v148[4]) = v7;
  if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    while ( 1 )
    {
      UserSessionSwitchLeaveCrit((__int64)v10, v9, v11, v12);
      KeWaitForSingleObject(gpevtVideoportCallout, WrUserRequest, 0, 0, 0LL);
      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
        || (Reserved = WPP_MAIN_CB.Reserved, ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
        && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
        || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, Reserved, v14, v15, Timeout);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      }
      v18 = SGDGetUserSessionState(v13, Reserved, v14, v15);
      v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v18 + 8));
      if ( v19 )
      {
        if ( IsEtwUserCritEnabled() )
        {
          v24 = PsGetCurrentThreadWin32Thread(v21, v20, v22, v23, Timeout);
          if ( v24 )
          {
            PerformanceCounter = KeQueryPerformanceCounter(0LL);
            v26 = PerformanceCounter.QuadPart - *(_QWORD *)(v24 + 8);
            QuadPart = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
              word_1C02D2A38 = 0;
              byte_1C02D2A3A = 0;
              memset(&unk_1C02D2A40, 0, 0x168uLL);
              qword_1C02D2BB8 = 0LL;
              xmmword_1C02D2BA8 = 0LL;
              qword_1C02D2BD0 = 0LL;
              xmmword_1C02D2BC0 = 0LL;
              qword_1C02D2BE8 = 0LL;
              xmmword_1C02D2BD8 = 0LL;
              xmmword_1C02D2BF0 = 0uLL;
            }
            UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v26, 0);
            if ( (dword_1C02D1900 & 1) == 0 )
            {
              dword_1C02D1900 |= 1u;
              memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
              word_1C02D2A38 = 0;
              byte_1C02D2A3A = 0;
              memset(&unk_1C02D2A40, 0, 0x168uLL);
              qword_1C02D2BB8 = 0LL;
              xmmword_1C02D2BA8 = 0LL;
              qword_1C02D2BD0 = 0LL;
              xmmword_1C02D2BC0 = 0LL;
              qword_1C02D2BE8 = 0LL;
              xmmword_1C02D2BD8 = 0LL;
              xmmword_1C02D2BF0 = 0uLL;
            }
            UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
            v29 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
            *(_QWORD *)(v24 + 8) = QuadPart;
            if ( !v29
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v28,
                v26,
                1000000 * v26 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            }
            if ( v26 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
              && (char *)QuadPart - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
            {
              if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                McTemplateK0xqx_EtwWriteTransfer(
                  gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v28,
                  v26,
                  1000 * v26 / gliQpcFreq.QuadPart,
                  gullUserCritAcquireToken);
              WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = QuadPart;
            }
            *(_QWORD *)(v24 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
          }
        }
        v30 = *v19;
        if ( !IsThreadCrossSessionAttached() )
        {
          gptiCurrent = v30;
          if ( v30 )
          {
            *((_DWORD *)v30 + 387) = 1;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
            if ( CurrentProcessWin32Process )
            {
              if ( *(_QWORD *)CurrentProcessWin32Process )
              {
                if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                {
                  v10 = gptiCurrent;
                  if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                    && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                  {
                    while ( 1 )
                    {
                      v33 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                      if ( !gpSharedUserCritDeferredUnlockListHead )
                        break;
                      gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                      v32 = *v33;
                      v33[2] = 0LL;
                      if ( !*(_DWORD *)(v32 + 8) )
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                      HMUnlockObject(*v33);
                    }
                  }
                }
              }
            }
          }
          goto LABEL_47;
        }
      }
      else
      {
        EtwTraceAcquiredExclusiveUserCrit();
      }
      gptiCurrent = 0LL;
LABEL_47:
      if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
      {
        v5 = a2;
        v8 = v142;
        v7 = a1;
        v6 = a3;
        break;
      }
    }
  }
  v140 = 0LL;
  LOWORD(v140) = gProtocolType;
  *(_OWORD *)v141 = 0LL;
  if ( (unsigned int)UserIsWddmConnectedSession() )
  {
    if ( v5 )
    {
      UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
      Uuid = 0LL;
      if ( !v8 && ExUuidCreate(&Uuid) < 0 )
        Uuid = 0LL;
      if ( a5 )
        v38 = *a5;
      else
        v38 = 0;
      p_Uuid = &Uuid;
      if ( v8 )
        p_Uuid = v8;
      v40 = *p_Uuid;
      if ( gptiForeground )
      {
        ThreadProcess = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
        ProcessImageFileName = PsGetProcessImageFileName(ThreadProcess);
      }
      else
      {
        ProcessImageFileName = 0;
      }
      v145 = v40;
      DrvDxgkCheckDisplayState(v7, 1, ProcessImageFileName, (unsigned int)v148, (__int64)&v145, v38);
      xmmword_1C02D87F0 = *(_OWORD *)&v148[1];
      if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
        || (v44 = WPP_MAIN_CB.Reserved,
            v46 = 0x8000002010000000uLL,
            v45 = 2LL,
            ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
        && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
        || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
        && (qword_1C02C4050 & 0x200000010000000LL) != 0
        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
      {
        v47 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v45, v44, v46, v43, Timeout);
        if ( v47 )
          v47[1] = KeQueryPerformanceCounter(0LL);
      }
      v48 = SGDGetUserSessionState(v45, v44, v46, v43);
      v49 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v48 + 8));
      if ( !v49 )
      {
        EtwTraceAcquiredExclusiveUserCrit();
LABEL_76:
        gptiCurrent = 0LL;
        goto LABEL_107;
      }
      if ( IsEtwUserCritEnabled() )
      {
        v54 = PsGetCurrentThreadWin32Thread(v51, v50, v52, v53, Timeout);
        if ( v54 )
        {
          v55 = KeQueryPerformanceCounter(0LL);
          v56 = v55.QuadPart - *(_QWORD *)(v54 + 8);
          v57 = (struct _LIST_ENTRY *)v55.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v56, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
            xmmword_1C02D2BD8 = 0LL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(_QWORD *)(v54 + 8) = v57;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v58,
              v56,
              1000000 * v56 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v56 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v57 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v58,
                v56,
                1000 * v56 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v57;
          }
          *(_QWORD *)(v54 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v59 = *v49;
      if ( IsThreadCrossSessionAttached() )
        goto LABEL_76;
      gptiCurrent = v59;
      if ( v59 )
      {
        *((_DWORD *)v59 + 387) = 1;
        v61 = PsGetCurrentProcessWin32Process(v60);
        if ( v61 )
        {
          if ( *(_QWORD *)v61
            && (*(_DWORD *)(v61 + 12) & 0x8000) != 0
            && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
            && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
          {
            while ( 1 )
            {
              v63 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
              if ( !gpSharedUserCritDeferredUnlockListHead )
                break;
              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead
                                                                                           + 2);
              v62 = *v63;
              v63[2] = 0LL;
              if ( !*(_DWORD *)(v62 + 8) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
              HMUnlockObject(*v63);
            }
          }
        }
      }
    }
LABEL_107:
    if ( gProtocolType || !a3 )
      goto LABEL_211;
    DisplayDiagRecordActiveTopology((struct USER_DETECTED_BLACK_SCREEN_REPORT *)&v140);
    DWORD1(v140) = 1;
    UserSessionSwitchLeaveCrit(v65, v64, v66, v67);
    v139 = 0x1A00000000LL;
    v69 = DrvDxgkPollDisplayChildren(&v139);
    DWORD2(v140) = v69;
    if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
      || (v70 = WPP_MAIN_CB.Reserved,
          v72 = 0x8000002010000000uLL,
          v71 = 2LL,
          ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
      && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
      || (v72 = 0x200000010000000LL, ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0)
      && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
      && (qword_1C02C4050 & 0x200000010000000LL) != 0
      && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
    {
      v73 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v71, v70, v72, v68, Timeout);
      if ( v73 )
        v73[1] = KeQueryPerformanceCounter(0LL);
    }
    v74 = SGDGetUserSessionState(v71, v70, v72, v68);
    v75 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v74 + 8));
    if ( v75 )
    {
      if ( IsEtwUserCritEnabled() )
      {
        v80 = PsGetCurrentThreadWin32Thread(v77, v76, v78, v79, Timeout);
        if ( v80 )
        {
          v81 = KeQueryPerformanceCounter(0LL);
          v82 = v81.QuadPart - *(_QWORD *)(v80 + 8);
          v83 = (struct _LIST_ENTRY *)v81.QuadPart;
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v82, 0);
          if ( (dword_1C02D1900 & 1) == 0 )
          {
            dword_1C02D1900 |= 1u;
            memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
            word_1C02D2A38 = 0;
            byte_1C02D2A3A = 0;
            memset(&unk_1C02D2A40, 0, 0x168uLL);
            qword_1C02D2BB8 = 0LL;
            xmmword_1C02D2BA8 = 0LL;
            qword_1C02D2BD0 = 0LL;
            xmmword_1C02D2BC0 = 0LL;
            qword_1C02D2BE8 = 0LL;
            xmmword_1C02D2BD8 = 0LL;
            xmmword_1C02D2BF0 = 0uLL;
          }
          UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
          *(_QWORD *)(v80 + 8) = v83;
          if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
            && (qword_1C02C4050 & 0x200000010000000LL) != 0
            && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            McTemplateK0xqx_EtwWriteTransfer(
              gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v84,
              v82,
              1000000 * v82 / gliQpcFreq.QuadPart,
              gullUserCritAcquireToken);
          }
          if ( v82 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
            && (char *)v83 - (char *)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink >= W32KEtwUserCritTelemetryThrottleQPC )
          {
            if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0xqx_EtwWriteTransfer(
                gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v84,
                v82,
                1000 * v82 / gliQpcFreq.QuadPart,
                gullUserCritAcquireToken);
            WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = v83;
          }
          *(_QWORD *)(v80 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
        }
      }
      v85 = *v75;
      if ( !IsThreadCrossSessionAttached() )
      {
        gptiCurrent = v85;
        if ( v85 )
        {
          *((_DWORD *)v85 + 387) = 1;
          v87 = PsGetCurrentProcessWin32Process(v86);
          if ( v87 )
          {
            if ( *(_QWORD *)v87 )
            {
              if ( (*(_DWORD *)(v87 + 12) & 0x8000) != 0
                && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
              {
                v88 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                if ( gpSharedUserCritDeferredUnlockListHead )
                {
                  do
                  {
                    gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v88[2];
                    v89 = *v88;
                    v88[2] = 0LL;
                    if ( !*(_DWORD *)(v89 + 8) )
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                    HMUnlockObject(*v88);
                    v88 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                  }
                  while ( gpSharedUserCritDeferredUnlockListHead );
                  v8 = v142;
                }
              }
            }
          }
        }
LABEL_154:
        *(_OWORD *)&v148[1] = xmmword_1C02D87F0;
        if ( v69 >= 0 )
        {
          HIDWORD(v140) = xxxUserSetDisplayConfig(0, 0LL, 0x187u, 0x80u, 0LL, 0, 0LL, &v130, 0LL, (__int64)v148, 0LL);
          if ( v140 >= 0 )
          {
            UserSessionSwitchLeaveCrit(v91, v90, v92, v93);
            v149 = 0LL;
            if ( a5 )
              v94 = *a5;
            else
              v94 = 0;
            v95 = (UUID *)&v149;
            if ( v8 )
              v95 = v8;
            v96 = *v95;
            if ( gptiForeground )
            {
              v97 = PsGetThreadProcess(*(PETHREAD *)gptiForeground);
              v98 = PsGetProcessImageFileName(v97);
            }
            else
            {
              v98 = 0;
            }
            v99 = a1;
            v146 = v96;
            DrvDxgkCheckDisplayState(a1, 0, v98, (unsigned int)v148, (__int64)&v146, v94);
            if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
              || (v101 = WPP_MAIN_CB.Reserved,
                  v103 = 0x8000002010000000uLL,
                  v102 = 2LL,
                  ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
              && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
              || ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x200000010000000LL) != 0
              && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
            {
              v104 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v102, v101, v103, v100, Timeouta);
              if ( v104 )
                v104[1] = KeQueryPerformanceCounter(0LL);
            }
            v105 = SGDGetUserSessionState(v102, v101, v103, v100);
            v106 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v105 + 8));
            if ( v106 )
            {
              if ( IsEtwUserCritEnabled() )
              {
                v111 = PsGetCurrentThreadWin32Thread(v108, v107, v109, v110, Timeouta);
                if ( v111 )
                {
                  v112 = KeQueryPerformanceCounter(0LL);
                  v113 = v112.QuadPart - *(_QWORD *)(v111 + 8);
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    memset(stru_1C02D1910, 0, sizeof(stru_1C02D1910));
                    word_1C02D2A38 = 0;
                    byte_1C02D2A3A = 0;
                    memset(&unk_1C02D2A40, 0, 0x168uLL);
                    qword_1C02D2BB8 = 0LL;
                    qword_1C02D2BD0 = 0LL;
                    xmmword_1C02D2BA8 = 0LL;
                    qword_1C02D2BE8 = 0LL;
                    xmmword_1C02D2BC0 = 0LL;
                    xmmword_1C02D2BF0 = 0uLL;
                    xmmword_1C02D2BD8 = 0LL;
                  }
                  UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v113, 0);
                  if ( (dword_1C02D1900 & 1) == 0 )
                  {
                    dword_1C02D1900 |= 1u;
                    UserCritTelemetry::UserCritTelemetry(v114);
                  }
                  UserCritTelemetry::SendUserCritSummary(stru_1C02D1910);
                  v29 = ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) == 0;
                  *(LARGE_INTEGER *)(v111 + 8) = v112;
                  if ( !v29
                    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                    && (qword_1C02C4050 & 0x200000010000000LL) != 0
                    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                  {
                    McTemplateK0xqx_EtwWriteTransfer(
                      gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v115,
                      v113,
                      1000000 * v113 / gliQpcFreq.QuadPart,
                      gullUserCritAcquireToken);
                  }
                  if ( v113 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                    && (signed __int64)(v112.QuadPart
                                      - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
                  {
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                      McTemplateK0xqx_EtwWriteTransfer(
                        gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v115,
                        v113,
                        1000 * v113 / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v112.QuadPart;
                  }
                  *(_QWORD *)(v111 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
              }
              v116 = *v106;
              if ( !IsThreadCrossSessionAttached() )
              {
                gptiCurrent = v116;
                if ( v116 )
                {
                  *((_DWORD *)v116 + 387) = 1;
                  v118 = PsGetCurrentProcessWin32Process(v117);
                  if ( v118 )
                  {
                    if ( *(_QWORD *)v118
                      && (*(_DWORD *)(v118 + 12) & 0x8000) != 0
                      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                      && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                    {
                      while ( 1 )
                      {
                        v120 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                        if ( !gpSharedUserCritDeferredUnlockListHead )
                          break;
                        gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                        v119 = *v120;
                        v120[2] = 0LL;
                        if ( !*(_DWORD *)(v119 + 8) )
                          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4237);
                        HMUnlockObject(*v120);
                      }
                    }
                  }
                }
                goto LABEL_212;
              }
            }
            else
            {
              EtwTraceAcquiredExclusiveUserCrit();
            }
            gptiCurrent = 0LL;
LABEL_212:
            v6 = a3;
            goto LABEL_213;
          }
        }
LABEL_211:
        v99 = a1;
        goto LABEL_212;
      }
    }
    else
    {
      EtwTraceAcquiredExclusiveUserCrit();
    }
    gptiCurrent = 0LL;
    goto LABEL_154;
  }
  v99 = a1;
LABEL_213:
  v121 = (char *)v141[1];
  if ( !gProtocolType
    && v6
    && (unsigned int)dword_1C02C4098 > 5
    && tlgKeywordOn((__int64)&dword_1C02C4098, 0x400000000008LL) )
  {
    v135 = HIDWORD(v140);
    v136 = DWORD2(v140);
    v137 = (int)v141[0];
    v131 = v140;
    v138 = DWORD1(v140);
    v132[0] = 4;
    v134 = v123;
    v133 = v99;
    v143 = v121;
    v144 = v124;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperByVal<4>>(
      v122,
      byte_1C029428A,
      (const GUID *)&v148[1],
      v124,
      (__int64)v132,
      (__int64)&v138,
      (__int64)&v131,
      (__int64)&v137,
      (__int64)&v136,
      (__int64)&v135,
      (__int64)&v134,
      (__int64 *)&v143,
      (__int64)&v133);
  }
  if ( v121 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v121);
}
