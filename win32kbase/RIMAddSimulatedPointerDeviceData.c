__int64 __fastcall RIMAddSimulatedPointerDeviceData(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 *a5, int *a6)
{
  __int64 v6; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r14d
  int v13; // edi
  __int64 v14; // rax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rdi
  unsigned __int64 v16; // rbx
  int v17; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v20; // r10d
  __int64 v21; // r11
  char v22; // si
  int v23; // edx
  int v24; // r8d
  PDEVICE_OBJECT v25; // rcx
  __int16 v26; // r9
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v33; // [rsp+158h] [rbp+58h] BYREF

  v32 = a1;
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3143);
  }
  if ( a2 != *(_QWORD *)(v6 + 472) )
  {
    LODWORD(v32) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3144);
  }
  v10 = *(_QWORD *)(v6 + 456);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    v13 = RIMSetContactBoundary(a2, a4 + 128, *(_QWORD *)(a3 + 2620), 0, 0);
    if ( v13 < 0 )
      return (unsigned int)v13;
  }
  v14 = *(_QWORD *)(v6 + 456);
  v15 = gpLeakTrackingAllocator;
  LODWORD(v32) = 1668313938;
  v28 = 260LL;
  v16 = *(unsigned __int16 *)(v14 + 44);
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  v29 = v16;
  if ( v17 )
  {
    if ( v17 != 1 )
    {
      if ( v17 != 2 )
        return (unsigned int)-1073741801;
      v33 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313938, &v33) )
      {
        v30[0] = &v28;
        v30[1] = &v32;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v15,
                                                                                           (__int64)v30,
                                                                                           &v29);
        goto LABEL_27;
      }
      v22 = 0;
      if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
      {
        v16 += 16LL;
        v22 = 1;
        v29 = v16;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v21, v16, v20);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v22
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v15,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v33,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_27;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v15,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v33,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_30;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707352u)
      || v16 + 16 < v16 )
    {
      return (unsigned int)-1073741801;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v28 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 16, (unsigned int)v32);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
          *Pool2 = 1668313938LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v15 + 1),
        0x63707352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v16,
                                                                                       1668313938LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
  }
LABEL_27:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_30:
  v13 = rimHidP_SetUsageValue(
          0LL,
          1LL,
          0LL,
          48LL,
          *(_DWORD *)(a3 + 2620),
          v11,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
          v12);
  if ( v13 < 0 )
  {
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v23) = 0;
    }
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 41;
      goto LABEL_47;
    }
  }
  else
  {
    v13 = rimHidP_SetUsageValue(
            0LL,
            1LL,
            0LL,
            49LL,
            *(_DWORD *)(a3 + 2624),
            v11,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            v12);
    if ( v13 >= 0 )
    {
      *a5 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      *a6 = v12;
      return (unsigned int)v13;
    }
    v25 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v23) = 0;
    }
    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 40;
LABEL_47:
      WPP_RECORDER_AND_TRACE_SF_d(
        v25->AttachedDevice,
        v23,
        v24,
        (_DWORD)gRimLog,
        3,
        1,
        v26,
        (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
        v13);
    }
  }
  return (unsigned int)v13;
}
