void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ebx
  __int16 v20; // di
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int v40; // ebx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // ebx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  struct RawInputManagerObject *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 i; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  NSInstrumentation::CLeakTrackingAllocator *v61; // rbx
  unsigned __int64 v62; // rdi
  int v63; // eax
  _QWORD *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v65; // r14
  int v66; // edi
  int v67; // r12d
  int v68; // eax
  int v69; // r13d
  struct _IO_STATUS_BLOCK *v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  struct _IO_STATUS_BLOCK *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  int v81; // eax
  __int64 v82; // r8
  PVOID Reserved; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  unsigned __int64 v85; // r9
  __int64 v86; // rax
  struct tagTHREADINFO **v87; // r15
  __int64 v88; // rdi
  LARGE_INTEGER PerformanceCounter; // r14
  LONGLONG v90; // rbx
  int v91; // r8d
  struct tagTHREADINFO *v92; // rbx
  __int64 v93; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagKERNELHANDLETABLEENTRY *v95; // rbx
  _QWORD *v96; // rax
  unsigned int v97; // r10d
  __int64 v98; // r11
  char v99; // r12
  struct _IO_STATUS_BLOCK *v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // eax
  __int64 v106; // rax
  SIZE_T Length; // [rsp+30h] [rbp-D0h]
  __int64 Pool2; // [rsp+60h] [rbp-A0h]
  int v109; // [rsp+68h] [rbp-98h]
  _DWORD v110[3]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v111; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v112; // [rsp+80h] [rbp-80h] BYREF
  int v113[2]; // [rsp+88h] [rbp-78h]
  PVOID v114[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v115[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v116; // [rsp+B0h] [rbp-50h] BYREF
  char v117; // [rsp+B8h] [rbp-48h]
  PVOID BackTrace[28]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v119; // [rsp+1B0h] [rbp+B0h]
  int v120; // [rsp+1B0h] [rbp+B0h]
  __int64 v121; // [rsp+1B8h] [rbp+B8h] BYREF
  int v122; // [rsp+1C0h] [rbp+C0h]
  __int64 v123; // [rsp+1C8h] [rbp+C8h] BYREF

  if ( *((_DWORD *)this + 351) == (unsigned int)PsGetCurrentThreadId() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)this + 165) + 8LL) == CurrentThread )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 153LL);
    if ( !*(_DWORD *)(SGDGetUserSessionState(v2, CurrentThread, v3, v4) + 12616) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 154LL);
    v9 = *((_QWORD *)this + 2);
    if ( v9 )
    {
      if ( *((_QWORD *)this + 1) != -1LL
        && *(struct _KTHREAD **)(v9 + 40) == KeGetCurrentThread()
        && *((_QWORD *)this + 168) )
      {
        v109 = gbNonServiceSession;
        v119 = *(_DWORD *)(SGDGetUserSessionState(v9, v6, v7, v8) + 12616);
        v13 = SGDGetUserSessionState(v119, v10, v11, v12);
        *(_DWORD *)(v13 + 12616) &= 0xFFFFFFF8;
        v18 = SGDGetUserSessionState(v15, v14, v16, v17);
        v19 = *(_DWORD *)(v18 + 12604);
        v20 = *(_WORD *)(v18 + 12608);
        v25 = SGDGetUserSessionState(v22, v21, v23, v24);
        *(_DWORD *)(v25 + 12684) = v19;
        *(_WORD *)(v25 + 12688) = v20;
        v30 = *(_DWORD *)(SGDGetUserSessionState(v27, v26, v28, v29) + 12596);
        *(_DWORD *)(SGDGetUserSessionState(v32, v31, v33, v34) + 12680) = v30;
        v39 = SGDGetUserSessionState(v36, v35, v37, v38);
        v40 = *(_DWORD *)(v39 + 13984);
        v121 = *(_QWORD *)(v39 + 13976);
        v45 = SGDGetUserSessionState(v42, v41, v43, v44);
        *(_QWORD *)(v45 + 12692) = v121;
        *(_DWORD *)(v45 + 12700) = v40;
        v46 = dword_1C02D1208;
        v121 = gRemoteClientKeyboardType;
        v51 = SGDGetUserSessionState(v48, v47, v49, v50);
        *(_QWORD *)(v51 + 12704) = v121;
        *(_DWORD *)(v51 + 12712) = v46;
        v52 = (struct RawInputManagerObject *)*((_QWORD *)this + 2);
        *(_QWORD *)v113 = *((_QWORD *)this + 1);
        RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v114, v52);
        UserSessionSwitchLeaveCrit(v54, v53, v55);
        v56 = 0LL;
        CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
          (CInpLockSharedIfNeeded *)&v116,
          *((struct CInpPushLock **)this + 165));
        v61 = gpLeakTrackingAllocator;
        v62 = 16LL * *((_QWORD *)this + 168);
        LODWORD(v121) = 1885947971;
        v63 = *(_DWORD *)gpLeakTrackingAllocator;
        v111 = 260LL;
        v112 = v62;
        switch ( v63 )
        {
          case 0:
            Pool2 = ExAllocatePool2(260LL, v62, 1885947971LL);
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
            if ( Pool2 )
              _InterlockedAdd64((volatile signed __int64 *)v61 + 14, 1uLL);
LABEL_14:
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_19;
            goto LABEL_15;
          case 1:
            if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                    gpLeakTrackingAllocator,
                    0x70694843u)
              || v62 + 16 < v62 )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
              Pool2 = 0LL;
              goto LABEL_19;
            }
            v96 = (_QWORD *)ExAllocatePool2(v111 & 0xFFFFFFFFFFFFFFFDuLL, v62 + 16, (unsigned int)v121);
            Pool2 = (__int64)v96;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v96;
            if ( !v96
              || (_InterlockedAdd64((volatile signed __int64 *)v61 + 14, 1uLL),
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v96 + 2,
                  *v96 = 1885947971LL,
                  Pool2 = (__int64)(v96 + 2),
                  v96 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v61 + 1),
                (const void *)0x70694843);
            }
            goto LABEL_14;
          case 2:
            *(_QWORD *)&v110[1] = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
                    gpLeakTrackingAllocator,
                    0x70694843u,
                    (unsigned __int64 *)&v110[1]) )
            {
              v115[0] = &v111;
              v115[1] = &v121;
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(v61, v115, &v112);
              Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              goto LABEL_14;
            }
            v99 = 0;
            if ( v62 < 0x1000 || (v62 & 0xFFF) != 0 )
            {
              v62 += 16LL;
              v99 = 1;
              v112 = v62;
            }
            Pool2 = ExAllocatePool2(v98, v62, v97);
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              _InterlockedAdd64((volatile signed __int64 *)v61 + 16, 1uLL);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v99 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v61,
                                        Pool2,
                                        *(_QWORD *)&v110[1],
                                        BackTrace) )
                {
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)(Pool2 + 16);
                  Pool2 += 16LL;
                  goto LABEL_14;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v61,
                                           Pool2,
                                           *(_QWORD *)&v110[1],
                                           BackTrace) )
              {
LABEL_15:
                for ( i = **((_QWORD **)this + 166); i; i = *(_QWORD *)(i + 56) )
                {
                  if ( *(_BYTE *)(i + 48) == 1 && *(_QWORD *)(i + 224) && *(_QWORD *)(i + 232) )
                  {
                    if ( (unsigned __int64)(unsigned int)v56 >= *((_QWORD *)this + 168) )
                    {
                      v122 = 0x20000;
                      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 219LL);
                      break;
                    }
                    v57 = 2LL * (unsigned int)v56;
                    v56 = (unsigned int)(v56 + 1);
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[v57] = *(_QWORD *)(i + 16);
                    LOWORD(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[v57 + 1]) = *(_WORD *)(i + 456);
                  }
                }
LABEL_19:
                if ( !v117 )
                {
                  ExReleasePushLockSharedEx(v116, 0LL);
                  KeLeaveCriticalRegion();
                }
                if ( (_DWORD)v56 )
                {
                  v65 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                  v66 = v113[0];
                  v67 = v119 & 1;
                  v68 = v119 & 4;
                  v69 = v119 & 2;
                  v120 = v68;
                  while ( 1 )
                  {
                    LODWORD(v123) = 0;
                    if ( v67 )
                    {
                      v70 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v57, v59, v60) + 12624);
                      v75 = SGDGetUserSessionState(v72, v71, v73, v74);
                      LODWORD(Length) = 0;
                      RIMDeviceIoControl(v66, *v65, 720900, v75 + 12684, 6u, 0LL, Length, (__int64)&v123, v70, 1, 0, 0);
                      v68 = v120;
                    }
                    if ( v69 )
                    {
                      v76 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v57, v59, v60) + 12624);
                      v81 = SGDGetUserSessionState(v78, v77, v79, v80);
                      LODWORD(Length) = 0;
                      RIMDeviceIoControl(v66, *v65, 720904, v81 + 12680, 4u, 0LL, Length, (__int64)&v123, v76, 1, 0, 0);
                      v68 = v120;
                    }
                    if ( !v68 )
                      goto LABEL_28;
                    if ( *((_BYTE *)v65 + 8) == 7 && *((_BYTE *)v65 + 9) == 82 )
                      goto LABEL_88;
                    if ( v109 )
                      break;
LABEL_28:
                    v65 += 2;
                    if ( !--v56 )
                    {
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (_QWORD *)Pool2;
                      goto LABEL_30;
                    }
                  }
                  if ( *(_DWORD *)(SGDGetUserSessionState(i, v57, v59, v60) + 12704) == 7
                    && *(_DWORD *)(SGDGetUserSessionState(i, v57, v59, v60) + 12708) == 131074 )
                  {
LABEL_88:
                    v110[0] = 0;
                    v100 = (struct _IO_STATUS_BLOCK *)(SGDGetUserSessionState(i, v57, v59, v60) + 12624);
                    v105 = SGDGetUserSessionState(v102, v101, v103, v104);
                    LODWORD(Length) = 0;
                    RIMDeviceIoControl(v66, *v65, 724996, v105 + 12692, 0xCu, 0LL, Length, (__int64)v110, v100, 1, 0, 0);
                  }
                  v68 = v120;
                  goto LABEL_28;
                }
LABEL_30:
                if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(
                    gpLeakTrackingAllocator,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
                v82 = 0x200000010000000LL;
                if ( dword_1C02C93D8 && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL)
                  || (Reserved = WPP_MAIN_CB.Reserved,
                      v85 = 0x8000002010000000uLL,
                      ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
                  && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                  && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
                  && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
                  || ((__int64)WPP_MAIN_CB.Reserved & v82) != 0
                  && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                  && (v82 & qword_1C02C4050) != 0
                  && (v82 & qword_1C02C4058) == qword_1C02C4058 )
                {
                  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
                  if ( CurrentThreadWin32Thread )
                    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                }
                v86 = SGDGetUserSessionState(i, Reserved, v82, v85);
                v87 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v86 + 8));
                if ( v87 )
                {
                  if ( (unsigned int)IsEtwUserCritEnabled() )
                  {
                    v88 = PsGetCurrentThreadWin32Thread();
                    if ( v88 )
                    {
                      PerformanceCounter = KeQueryPerformanceCounter(0LL);
                      v90 = PerformanceCounter.QuadPart - *(_QWORD *)(v88 + 8);
                      if ( (dword_1C02D1900 & 1) == 0 )
                      {
                        dword_1C02D1900 |= 1u;
                        memset(&unk_1C02D1910, 0, 0x1128uLL);
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
                      UserCritTelemetry::UpdateUserCritInfo(&unk_1C02D1910, v90, 0LL);
                      if ( (dword_1C02D1900 & 1) == 0 )
                      {
                        dword_1C02D1900 |= 1u;
                        memset(&unk_1C02D1910, 0, 0x1128uLL);
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
                      UserCritTelemetry::SendUserCritSummary((UserCritTelemetry *)&unk_1C02D1910);
                      *(LARGE_INTEGER *)(v88 + 8) = PerformanceCounter;
                      if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                        && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                        && (qword_1C02C4050 & 0x200000010000000LL) != 0
                        && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058
                        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                      {
                        McTemplateK0xqx_EtwWriteTransfer(
                          gullUserCritAcquireToken,
                          (unsigned int)&AcquiredExclusiveUserCritEvent,
                          v91,
                          v90,
                          1000000 * v90 / gliQpcFreq.QuadPart,
                          gullUserCritAcquireToken);
                      }
                      if ( v90 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                        && (signed __int64)(PerformanceCounter.QuadPart
                                          - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
                      {
                        if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                          McTemplateK0xqx_EtwWriteTransfer(
                            gullUserCritAcquireToken,
                            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                            v91,
                            v90,
                            1000 * v90 / gliQpcFreq.QuadPart,
                            gullUserCritAcquireToken);
                        WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
                      }
                      *(_QWORD *)(v88 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                    }
                  }
                  v92 = *v87;
                  if ( !(unsigned int)IsThreadCrossSessionAttached() )
                  {
                    gptiCurrent = v92;
                    if ( v92 )
                    {
                      *((_DWORD *)v92 + 387) = 1;
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v93);
                      if ( CurrentProcessWin32Process )
                      {
                        if ( *(_QWORD *)CurrentProcessWin32Process
                          && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
                          && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          while ( 1 )
                          {
                            v95 = gpSharedUserCritDeferredUnlockListHead;
                            if ( !gpSharedUserCritDeferredUnlockListHead )
                              break;
                            gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpSharedUserCritDeferredUnlockListHead + 2);
                            v106 = *(_QWORD *)v95;
                            *((_QWORD *)v95 + 2) = 0LL;
                            if ( !*(_DWORD *)(v106 + 8) )
                              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                            HMUnlockObject(*(_QWORD *)v95);
                          }
                        }
                      }
                    }
                    goto LABEL_54;
                  }
                }
                else
                {
                  EtwTraceAcquiredExclusiveUserCrit();
                }
                gptiCurrent = 0LL;
LABEL_54:
                ApiSetEditionUpdateRemoteLights();
                RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(v114);
                return;
              }
              _InterlockedAdd64((volatile signed __int64 *)v61 + 17, 1uLL);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
            break;
        }
        Pool2 = 0LL;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        goto LABEL_19;
      }
    }
  }
}
