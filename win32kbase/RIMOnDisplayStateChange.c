_UNKNOWN **RIMOnDisplayStateChange()
{
  __int64 *v0; // rsi
  unsigned int v1; // edi
  char v2; // dl
  unsigned int *v3; // r13
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  _QWORD *i; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  unsigned __int64 v19; // rbx
  int v20; // eax
  __int64 Pool2; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 *v24; // r15
  __int64 v25; // r12
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 j; // rbx
  char v30; // dl
  _UNKNOWN **result; // rax
  _QWORD *v32; // rax
  __int64 v33; // r10
  char v34; // di
  bool v35; // dl
  _QWORD v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v39; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v40; // [rsp+158h] [rbp+58h] BYREF
  __int64 v41; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v42; // [rsp+168h] [rbp+68h] BYREF

  v0 = 0LL;
  v1 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      79,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v37 = 0LL;
  v3 = RIMGetQDCActivePathsData((unsigned int *)&v37);
  v8 = SGDGetUserSessionState(v5, v4, v6, v7);
  RIMLockExclusive(v8 + 240);
  v13 = (_QWORD *)(SGDGetUserSessionState(v10, v9, v11, v12) + 304);
  v16 = 2LL;
  i = (_QWORD *)*v13;
  if ( (_QWORD *)*v13 != v13 )
  {
    do
    {
      if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) )
        ++v1;
      i = (_QWORD *)*i;
    }
    while ( i != v13 );
    if ( v1 )
    {
      v18 = gpLeakTrackingAllocator;
      v39 = 1836086098;
      v41 = 260LL;
      v19 = 8LL * v1;
      v20 = *(_DWORD *)gpLeakTrackingAllocator;
      v42 = v19;
      switch ( v20 )
      {
        case 0:
          Pool2 = ExAllocatePool2(260LL, 8LL * v1, 1836086098LL);
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
          goto LABEL_16;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D707352u)
            && v19 + 16 >= v19 )
          {
            v32 = (_QWORD *)ExAllocatePool2(v41 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, v39);
            Pool2 = (__int64)v32;
            if ( !v32
              || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
                  *v32 = 1836086098LL,
                  Pool2 = (__int64)(v32 + 2),
                  v32 == (_QWORD *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v18 + 1),
                (const void *)0x6D707352);
            }
LABEL_16:
            v0 = (__int64 *)Pool2;
            v1 = 0;
            if ( !Pool2 )
              goto LABEL_23;
            goto LABEL_17;
          }
          break;
        case 2:
          v40 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6D707352u, &v40) )
          {
            v36[0] = &v41;
            v36[1] = &v39;
            Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                      v18,
                      v36,
                      &v42);
            goto LABEL_16;
          }
          v34 = 0;
          if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
          {
            v19 += 16LL;
            v34 = 1;
            v42 = v19;
          }
          Pool2 = ExAllocatePool2(v33, v19, 1836086098LL);
          if ( Pool2 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v34 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v18,
                                      Pool2,
                                      v40,
                                      BackTrace) )
              {
                Pool2 += 16LL;
                goto LABEL_16;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v18,
                                         Pool2,
                                         v40,
                                         BackTrace) )
            {
              v0 = (__int64 *)Pool2;
              v1 = 0;
LABEL_17:
              v16 = SGDGetUserSessionState(i, v16, v14, v15) + 304;
              for ( i = *(_QWORD **)v16; i != (_QWORD *)v16; i = (_QWORD *)*i )
              {
                v14 = i - 2;
                if ( !*((_BYTE *)i + 65) && !*((_BYTE *)v14 + 80) )
                {
                  v22 = v1++;
                  *(_QWORD *)(Pool2 + 8 * v22) = v14;
                }
              }
              goto LABEL_23;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
          }
          break;
      }
      v1 = 0;
      v0 = 0LL;
    }
  }
LABEL_23:
  v23 = SGDGetUserSessionState(i, v16, v14, v15);
  *(_QWORD *)(v23 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v23 + 240, 0LL);
  KeLeaveCriticalRegion();
  if ( v1 )
  {
    v24 = v0;
    v25 = v1;
    do
    {
      if ( !v0 )
      {
        LODWORD(v40) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2433LL);
      }
      v26 = *v24;
      v27 = *v24 + 104;
      RIMLockExclusive(v27);
      if ( *(_BYTE *)(v26 + 81) )
      {
        v35 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v35,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gRimLog,
            3,
            1,
            80,
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
      else
      {
        v28 = v26 + 760;
        RIMLockExclusive(v26 + 760);
        for ( j = *(_QWORD *)(v26 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1336) )
              rimFindMonitorForDigitizerWithQDCData(j, v3, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 1336) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 472));
          }
        }
        *(_QWORD *)(v28 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v27 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
      ++v24;
      --v25;
    }
    while ( v25 );
  }
  if ( v0 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v0);
  RIMFreeQDCActivePathsData((__int64)v3);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v30 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v30 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_(
                          WPP_GLOBAL_Control->AttachedDevice,
                          v30,
                          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                          (_DWORD)gRimLog,
                          4,
                          1,
                          81,
                          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  return result;
}
