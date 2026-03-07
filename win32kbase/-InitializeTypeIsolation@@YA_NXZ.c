bool __fastcall InitializeTypeIsolation(__int64 a1)
{
  __int64 v1; // rax
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  __int64 v3; // rsi
  int v4; // eax
  __int64 Pool2; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD v9[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+110h] [rbp+77h] BYREF
  __int64 v14; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = SGDGetSessionState(a1);
  v2 = gpLeakTrackingAllocator;
  v11 = 1869834581;
  v13 = 260LL;
  v3 = *(_QWORD *)(v1 + 24);
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 64LL;
  if ( !v4 )
  {
    Pool2 = ExAllocatePool2(260LL, 64LL, 1869834581LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_4;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v12 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6F736955u, &v12) )
      {
        v9[0] = &v13;
        v9[1] = &v11;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v2,
                  (__int64)v9,
                  &v14);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v8, 80LL, 1869834581LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v2,
                                  Pool2,
                                  v12,
                                  BackTrace) )
            goto LABEL_4;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v2,
                                     Pool2,
                                     v12,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_21;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F736955u) )
  {
LABEL_21:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v7 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 80LL, v11);
  Pool2 = (__int64)v7;
  if ( !v7
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v7 = 1869834581LL,
        Pool2 = (__int64)(v7 + 2),
        v7 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x6F736955);
  }
LABEL_4:
  *(_QWORD *)(v3 + 6504) = Pool2;
  if ( Pool2 )
    return TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<221184,864>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<913408,3568>,NSInstrumentation::CTypeIsolation<32768,128>,NSInstrumentation::CTypeIsolation<233472,912>>::Create(Pool2);
  else
    return 0;
}
