__int64 __fastcall PTPEngineTraceProducer::Create(
        struct IPTPEngine *a1,
        __int64 a2,
        struct PTPEngineTraceProducer **a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  PTPEngineTraceProducer *v11; // rax
  unsigned __int64 v13[2]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v17; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = gpLeakTrackingAllocator;
  v17 = 1886679893;
  v14 = 260LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v15 = 608LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, 608LL, 1886679893LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
LABEL_16:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_19;
  }
  if ( v6 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70747355u) )
      return 3221225495LL;
    v9 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, 624LL, v17);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *v9 = 1886679893LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        0x70747355uLL);
    }
    goto LABEL_16;
  }
  if ( v6 != 2 )
    return 3221225495LL;
  v13[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886679893, v13) )
  {
    v13[0] = (unsigned __int64)&v14;
    v13[1] = (unsigned __int64)&v17;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v3,
              (__int64)v13,
              &v15);
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(v10, 624LL, 1886679893LL);
  if ( !Pool2 )
    return 3221225495LL;
  _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v3,
           (const void *)Pool2,
           v13[0],
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_16;
    }
LABEL_21:
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 3221225495LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v3,
          Pool2,
          v13[0],
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_21;
LABEL_19:
  v11 = PTPEngineTraceProducer::PTPEngineTraceProducer((PTPEngineTraceProducer *)Pool2, a1);
  if ( v11 )
  {
    *((_QWORD *)v11 + 75) = a2;
    *a3 = v11;
    return 0LL;
  }
  return 3221225495LL;
}
