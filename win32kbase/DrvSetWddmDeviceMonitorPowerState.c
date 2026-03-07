void __fastcall DrvSetWddmDeviceMonitorPowerState(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 j; // rbx
  __int64 k; // rax
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  unsigned __int64 v12; // rbx
  int v13; // eax
  char *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v15; // rdi
  unsigned int v16; // esi
  unsigned int i; // edx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // r14d
  char *v25; // rdi
  int v26; // r15d
  __int64 v27; // r8
  PVOID Reserved; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int64 v32; // rax
  struct tagTHREADINFO **v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rsi
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v40; // rdi
  int v41; // r8d
  struct tagTHREADINFO *v42; // rdi
  struct tagTHREADINFO *v43; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 *v45; // rdi
  __int64 v46; // rdx
  void *v47; // rcx
  int v48; // edi
  char *v49; // rax
  unsigned int v50; // edx
  __int64 v51; // r10
  char v52; // r15
  __int64 v53; // rax
  PVOID v54; // [rsp+20h] [rbp-E0h]
  __int64 Pool2; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v56; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v58; // [rsp+68h] [rbp-98h] BYREF
  _DWORD InputBuffer[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+78h] [rbp-88h]
  _QWORD v61[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID BackTrace[26]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v63; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v64; // [rsp+188h] [rbp+88h] BYREF

  InputBuffer[0] = a2;
  InputBuffer[1] = 0;
  v60 = a4;
  v6 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return;
  WdLogSingleEntry2(5LL, a1);
  if ( !a3 )
  {
    v7 = *(_QWORD *)(v6 + 1264);
    v8 = 0;
    while ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 160) & 0x800000) != 0 && *(_QWORD *)(v7 + 224) && (!a1 || *(_QWORD *)(v7 + 144) == a1) )
        ++v8;
      v7 = *(_QWORD *)(v7 + 128);
    }
    if ( !(24 * v8) )
    {
LABEL_118:
      WdLogSingleEntry1(6LL, v8);
      goto LABEL_10;
    }
    v11 = gpLeakTrackingAllocator;
    v12 = 24 * v8;
    v63 = 1886221383;
    v57 = 260LL;
    v13 = *(_DWORD *)gpLeakTrackingAllocator;
    v58 = v12;
    switch ( v13 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v12, 1886221383LL);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
        goto LABEL_23;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u)
          && v12 + 16 >= v12 )
        {
          v49 = (char *)ExAllocatePool2(v57 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v63);
          Pool2 = (__int64)v49;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v49;
          if ( !v49
            || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v49 + 16,
                *(_QWORD *)v49 = 1886221383LL,
                Pool2 = (__int64)(v49 + 16),
                v49 == (char *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v11 + 1),
              (const void *)0x706D7447);
          }
LABEL_23:
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            v15 = *(_QWORD *)(v6 + 1264);
            v16 = 0;
            if ( v15 )
            {
              Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              do
              {
                if ( (*(_DWORD *)(v15 + 160) & 0x800000) != 0
                  && *(_QWORD *)(v15 + 224)
                  && (!a1 || *(_QWORD *)(v15 + 144) == a1) )
                {
                  for ( i = 0; i < v16; ++i )
                  {
                    v7 = 3LL * i;
                    if ( *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[24 * i + 16] == *(_QWORD *)(v15 + 144) )
                      break;
                  }
                  if ( v16 == i )
                  {
                    v46 = 3LL * v16;
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v46] = *(_QWORD *)(v15 + 136);
                    v47 = *(void **)(v15 + 224);
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v46 + 8] = v47;
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v46 + 16] = *(_QWORD *)(v15 + 144);
                    ObfReferenceObject(v47);
                    ++v16;
                  }
                }
                v15 = *(_QWORD *)(v15 + 128);
              }
              while ( v15 );
            }
            v18 = SGDGetUserGdiSessionState(v7);
            KeResetEvent(*(PRKEVENT *)(v18 + 8));
            *(_BYTE *)(SGDGetUserGdiSessionState(v19) + 1) = 1;
            UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
            v24 = 0;
            if ( v16 )
            {
              v25 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              do
              {
                DrvDxgkLogCodePointPacket(90LL, v24, v16, 0);
                v26 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)v25, 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v64, 1u, 1);
                if ( v26 < 0 )
                  WdLogSingleEntry2(2LL, *(_QWORD *)v25);
                ObfDereferenceObject(*((PVOID *)v25 + 1));
                DrvDxgkLogCodePointPacket(91LL, (unsigned int)v26, 0, 0);
                ++v24;
                v25 += 24;
              }
              while ( v24 < v16 );
            }
            v27 = 0x200000010000000LL;
            if ( dword_1C02C93D8 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL)
              || (Reserved = WPP_MAIN_CB.Reserved,
                  v30 = 0x8000002010000000uLL,
                  v29 = 2LL,
                  ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000002010000000uLL) != 0)
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (qword_1C02C4050 & 0x8000002010000000uLL) != 0
              && (qword_1C02C4058 & 0x8000002010000000uLL) == qword_1C02C4058
              || ((__int64)WPP_MAIN_CB.Reserved & v27) != 0
              && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
              && (v27 & qword_1C02C4050) != 0
              && (v27 & qword_1C02C4058) == qword_1C02C4058 )
            {
              Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, Reserved, v27, v30, v54);
              if ( CurrentThreadWin32Thread )
              {
                CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              }
            }
            v32 = SGDGetUserSessionState(v29, Reserved, v27, v30);
            v33 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v32 + 8));
            if ( v33 )
            {
              if ( IsEtwUserCritEnabled() )
              {
                v38 = PsGetCurrentThreadWin32Thread(v35, v34, v36, v37, v54);
                if ( v38 )
                {
                  PerformanceCounter = KeQueryPerformanceCounter(0LL);
                  v40 = PerformanceCounter.QuadPart - *(_QWORD *)(v38 + 8);
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
                  UserCritTelemetry::UpdateUserCritInfo((__int64)stru_1C02D1910, v40, 0);
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
                  *(LARGE_INTEGER *)(v38 + 8) = PerformanceCounter;
                  if ( ((__int64)WPP_MAIN_CB.Reserved & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
                    && (qword_1C02C4050 & 0x200000010000000LL) != 0
                    && (qword_1C02C4058 & 0x200000010000000LL) == qword_1C02C4058 )
                  {
                    Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                    {
                      McTemplateK0xqx_EtwWriteTransfer(
                        gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritEvent,
                        v41,
                        v40,
                        1000000 * v40 / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                      Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                    }
                  }
                  if ( v40 >= *(__int64 *)&WPP_MAIN_CB.SectorSize
                    && (signed __int64)(PerformanceCounter.QuadPart
                                      - (unsigned __int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) >= W32KEtwUserCritTelemetryThrottleQPC )
                  {
                    if ( (Microsoft_Windows_Win32kEnableBits & 0x1000000000LL) != 0 )
                      McTemplateK0xqx_EtwWriteTransfer(
                        gullUserCritAcquireToken,
                        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                        v41,
                        v40,
                        1000 * v40 / gliQpcFreq.QuadPart,
                        gullUserCritAcquireToken);
                    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)PerformanceCounter.QuadPart;
                  }
                  *(_QWORD *)(v38 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
                }
              }
              v42 = *v33;
              if ( !IsThreadCrossSessionAttached() )
              {
                gptiCurrent = v42;
                if ( v42 )
                {
                  *((_DWORD *)v42 + 387) = 1;
                  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v43);
                  if ( CurrentProcessWin32Process )
                  {
                    if ( *(_QWORD *)CurrentProcessWin32Process )
                    {
                      if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0 )
                      {
                        v43 = gptiCurrent;
                        if ( (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
                          && (*((_DWORD *)gptiCurrent + 318) & 0x80u) == 0 )
                        {
                          v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                          if ( gpSharedUserCritDeferredUnlockListHead )
                          {
                            do
                            {
                              gpSharedUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v45[2];
                              v53 = *v45;
                              v45[2] = 0LL;
                              if ( !*(_DWORD *)(v53 + 8) )
                              {
                                v64 = 0x20000;
                                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4237LL);
                              }
                              HMUnlockObject(*v45);
                              v45 = (__int64 *)gpSharedUserCritDeferredUnlockListHead;
                            }
                            while ( gpSharedUserCritDeferredUnlockListHead );
                            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
                          }
                        }
                      }
                    }
                  }
                }
                goto LABEL_62;
              }
            }
            else
            {
              EtwTraceAcquiredExclusiveUserCrit();
            }
            gptiCurrent = 0LL;
LABEL_62:
            *(_BYTE *)(SGDGetUserGdiSessionState(v43) + 1) = 0;
            UserSetMonitorPowerWaiterEvent(0);
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            return;
          }
          goto LABEL_118;
        }
        break;
      case 2:
        v56 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v56) )
        {
          v61[0] = &v57;
          v61[1] = &v63;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                     (__int64)v11,
                                                                                                     (__int64)v61,
                                                                                                     &v58);
          Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          goto LABEL_23;
        }
        v52 = 0;
        if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
        {
          v12 += 16LL;
          v52 = 1;
          v58 = v12;
        }
        Pool2 = ExAllocatePool2(v51, v12, v50);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v52 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v11,
                                    Pool2,
                                    v56,
                                    BackTrace) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)(Pool2 + 16);
LABEL_90:
              Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              goto LABEL_23;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v11,
                                       Pool2,
                                       v56,
                                       BackTrace) )
          {
            goto LABEL_23;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_90;
  }
LABEL_10:
  for ( j = *(_QWORD *)(v6 + 1264); j; j = *(_QWORD *)(j + 128) )
  {
    if ( (*(_DWORD *)(j + 160) & 0x800000) != 0 && *(_QWORD *)(j + 136) && (!a1 || *(_QWORD *)(j + 144) == a1) )
    {
      for ( k = *(_QWORD *)(v6 + 1264); k; k = *(_QWORD *)(k + 128) )
      {
        if ( *(_QWORD *)(k + 144) == *(_QWORD *)(j + 144) )
          break;
      }
      if ( k == j )
      {
        DrvDxgkLogCodePointPacket(90LL, 0LL, 0, 0);
        v48 = GreDeviceIoControlImpl(*(PDEVICE_OBJECT *)(j + 136), 0x23200Fu, InputBuffer, 0x10u, 0LL, 0, &v64, 1u, 1);
        if ( v48 < 0 )
          WdLogSingleEntry2(2LL, j);
        DrvDxgkLogCodePointPacket(91LL, (unsigned int)v48, 0, 0);
      }
    }
  }
  WdLogSingleEntry0(5LL);
}
