__int64 __fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  __int64 v11; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v10 = 68LL;
  v14 = 1699443541;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = 24LL;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(68LL, 24LL, 1699443541LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_4;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x654B7355u, &v15) )
      {
        v12[0] = &v10;
        v12[1] = &v14;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v2,
                  v12,
                  &v11);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v9, 40LL, 1699443541LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v2,
                                  Pool2,
                                  v15,
                                  BackTrace) )
            goto LABEL_5;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v2,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x654B7355u) )
    return 0LL;
  v8 = (_QWORD *)ExAllocatePool2(v10 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v14);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v8 = 1699443541LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x654B7355);
  }
LABEL_4:
  if ( Pool2 )
LABEL_5:
    KeInitializeEvent((PRKEVENT)Pool2, Type, a2);
  return Pool2;
}
