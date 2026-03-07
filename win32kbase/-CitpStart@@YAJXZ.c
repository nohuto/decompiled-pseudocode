__int64 CitpStart(void)
{
  unsigned int v0; // edi
  NSInstrumentation::CLeakTrackingAllocator *v1; // rsi
  int v2; // eax
  __int64 v3; // rdx
  __int64 Pool2; // rbx
  struct _CIT_IMPACT_CONTEXT *v5; // rsi
  int v6; // r14d
  __int16 v7; // ax
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD v11[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+110h] [rbp+77h] BYREF
  __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  v0 = 0;
  if ( byte_1C02D4D81 )
    return (unsigned int)-1073741431;
  if ( !CitpIsInteractiveSession() )
    return (unsigned int)-1073741637;
  v1 = gpLeakTrackingAllocator;
  v15 = 260LL;
  v13 = 1231254357;
  v2 = *(_DWORD *)gpLeakTrackingAllocator;
  v3 = 312LL;
  v16 = 312LL;
  if ( !v2 )
  {
    Pool2 = ExAllocatePool2(260LL, 312LL, 1231254357LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_6;
  }
  if ( v2 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u) )
      goto LABEL_30;
    v9 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 328LL, v13);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
          *v9 = 1231254357LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v1 + 1),
        (const void *)0x49637355);
    }
LABEL_6:
    v5 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
    if ( Pool2 )
      goto LABEL_7;
LABEL_30:
    v0 = -1073741670;
    CitpLogFailureWorker(-1073741670, (const char *)v3, 0x7Du);
    return v0;
  }
  if ( v2 != 2 )
    goto LABEL_30;
  v14 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v14) )
  {
    v11[0] = &v15;
    v11[1] = &v13;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v1,
              (__int64)v11,
              &v16);
    goto LABEL_6;
  }
  Pool2 = ExAllocatePool2(v10, 328LL, 1231254357LL);
  if ( !Pool2 )
    goto LABEL_30;
  _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v1,
                            Pool2,
                            v14,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_6;
    }
LABEL_29:
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_30;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           v14,
                           BackTrace) )
    goto LABEL_29;
  v5 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
LABEL_7:
  CitpContextInitialize((struct _CIT_IMPACT_CONTEXT *)Pool2);
  v6 = CitpContextTrackingDataStart((struct _CIT_IMPACT_CONTEXT *)Pool2);
  if ( v6 < 0 )
  {
    CitpContextCleanup(v5);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v5);
    return (unsigned int)v6;
  }
  else
  {
    v7 = MEMORY[0xFFFFF780000002C4];
    if ( MEMORY[0xFFFFF780000002C4] > 0xFFFFu )
      v7 = -1;
    *(_WORD *)(Pool2 + 116) = v7;
    xmmword_1C02D4DA0 = (struct _CIT_IMPACT_CONTEXT *)Pool2;
  }
  return v0;
}
