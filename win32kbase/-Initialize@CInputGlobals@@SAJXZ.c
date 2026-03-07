__int64 CInputGlobals::Initialize(void)
{
  NSInstrumentation::CLeakTrackingAllocator *v0; // rsi
  unsigned int v1; // edi
  int v2; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  _QWORD v7[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v9; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v10; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v11; // [rsp+110h] [rbp+77h] BYREF
  __int64 v12; // [rsp+118h] [rbp+7Fh] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  v9 = 1919964227;
  v11 = 260LL;
  v2 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = 112LL;
  if ( !v2 )
  {
    Pool2 = ExAllocatePool2(260LL, 112LL, 1919964227LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v0 + 14);
    goto LABEL_3;
  }
  if ( v2 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72705443u) )
      goto LABEL_23;
    v5 = (_QWORD *)ExAllocatePool2(v11 & 0xFFFFFFFFFFFFFFFDuLL, 128LL, v9);
    Pool2 = (__int64)v5;
    if ( !v5
      || (_InterlockedIncrement64((volatile signed __int64 *)v0 + 14),
          *v5 = 1919964227LL,
          Pool2 = (__int64)(v5 + 2),
          v5 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v0 + 1),
        (const void *)0x72705443);
    }
LABEL_3:
    if ( Pool2 )
      goto LABEL_4;
LABEL_23:
    gpInputGlobals = 0LL;
    return (unsigned int)-1073741801;
  }
  if ( v2 != 2 )
    goto LABEL_23;
  v10 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72705443u, &v10) )
  {
    v7[0] = &v11;
    v7[1] = &v9;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v0,
              (__int64)v7,
              &v12);
    goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(v6, 128LL, 1919964227LL);
  if ( !Pool2 )
    goto LABEL_23;
  _InterlockedIncrement64((volatile signed __int64 *)v0 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v0,
                            Pool2,
                            v10,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_3;
    }
LABEL_22:
    _InterlockedIncrement64((volatile signed __int64 *)v0 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_23;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v0,
                           Pool2,
                           v10,
                           BackTrace) )
    goto LABEL_22;
LABEL_4:
  gpInputGlobals = CInputGlobals::CInputGlobals((CInputGlobals *)Pool2);
  if ( !gpInputGlobals )
    return (unsigned int)-1073741801;
  return v1;
}
