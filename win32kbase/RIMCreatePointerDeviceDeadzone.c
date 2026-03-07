__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  _QWORD *v3; // r15
  const struct tagRIMDEADZONE *v4; // r14
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  unsigned int v10; // r10d
  __int64 v11; // r11
  int v12; // edi
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v19; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v20; // [rsp+160h] [rbp+60h] BYREF
  __int64 v21; // [rsp+168h] [rbp+68h] BYREF

  v3 = a3;
  v4 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      32,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
  }
  if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 || *(_DWORD *)(a1 + 448) >= 5u )
  {
    v12 = -1073741811;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        34,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    goto LABEL_50;
  }
  v6 = gpLeakTrackingAllocator;
  LODWORD(a2) = 64;
  v16 = 64LL;
  v19 = 1853506642;
  v21 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 64LL, 1853506642LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
    goto LABEL_28;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v20 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1853506642, &v20) )
      {
        v17[0] = &v21;
        v17[1] = &v19;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)v17,
                  &v16);
        goto LABEL_28;
      }
      Pool2 = ExAllocatePool2(v11, 80LL, v10);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v6,
                 (const void *)Pool2,
                 v20,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_28;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v6,
                    Pool2,
                    v20,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_29;
        }
        _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_25:
    v12 = -1073741801;
    goto LABEL_50;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E7A4452u) )
    goto LABEL_25;
  v9 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v19);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
        *v9 = 1853506642LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      0x6E7A4452uLL);
  }
LABEL_28:
  if ( !Pool2 )
    goto LABEL_25;
LABEL_29:
  v12 = RIMDeadzone::Initialize((RIMDeadzone *)Pool2, v4);
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        33,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  }
  else
  {
    v13 = 0;
    v14 = (_QWORD *)(a1 + 408);
    while ( *v14 )
    {
      ++v13;
      ++v14;
      if ( v13 >= 5 )
      {
        v19 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1147);
        goto LABEL_50;
      }
    }
    *(_QWORD *)(a1 + 8LL * v13 + 408) = Pool2;
    ++*(_DWORD *)(a1 + 448);
    *v3 = v13;
  }
LABEL_50:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      35,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
