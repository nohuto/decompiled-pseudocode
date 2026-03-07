__int64 CreateKernelTimer()
{
  NSInstrumentation::CLeakTrackingAllocator *v0; // rdi
  int v1; // eax
  __int64 Pool2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // r10
  _QWORD v6[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v8; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v9; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v10; // [rsp+110h] [rbp+77h] BYREF
  __int64 v11; // [rsp+118h] [rbp+7Fh] BYREF

  v0 = gpLeakTrackingAllocator;
  v10 = 68LL;
  v8 = 2037609301;
  v1 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = 64LL;
  if ( !v1 )
  {
    Pool2 = ExAllocatePool2(68LL, 64LL, 2037609301LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v0 + 14);
    goto LABEL_16;
  }
  if ( v1 != 1 )
  {
    if ( v1 == 2 )
    {
      v9 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x79737355u, &v9) )
      {
        v6[0] = &v10;
        v6[1] = &v8;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v0,
                  (__int64)v6,
                  &v11);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v4, 80LL, 2037609301LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v0,
                                  Pool2,
                                  v9,
                                  BackTrace) )
          {
LABEL_19:
            KeInitializeTimerEx((PKTIMER)Pool2, SynchronizationTimer);
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v0,
                                     Pool2,
                                     v9,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x79737355u) )
    return 0LL;
  v3 = (_QWORD *)ExAllocatePool2(v10 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v8);
  Pool2 = (__int64)v3;
  if ( !v3
    || (_InterlockedIncrement64((volatile signed __int64 *)v0 + 14),
        *v3 = 2037609301LL,
        Pool2 = (__int64)(v3 + 2),
        v3 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v0 + 1),
      (const void *)0x79737355);
  }
LABEL_16:
  if ( Pool2 )
    goto LABEL_19;
  return Pool2;
}
