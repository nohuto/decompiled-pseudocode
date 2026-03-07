MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rbx
  int v3; // eax
  __int64 Pool2; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdi
  _QWORD v9[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v11; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v12; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+110h] [rbp+77h] BYREF
  __int64 v14; // [rsp+118h] [rbp+7Fh] BYREF

  *(_QWORD *)this = 0LL;
  v1 = gpLeakTrackingAllocator;
  v12 = 1886221383;
  v13 = 260LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 256LL;
  if ( !v3 )
  {
    Pool2 = ExAllocatePool2(260LL, 256LL, 1886221383LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_16;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v11 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v11) )
      {
        v9[0] = &v13;
        v9[1] = &v12;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)v9,
                  &v14);
        goto LABEL_16;
      }
      v7 = ExAllocatePool2(v6, 272LL, 1886221383LL);
      if ( v7 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(v7 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v1,
                                  v7,
                                  v11,
                                  BackTrace) )
          {
            *(_QWORD *)this = v7;
            return this;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v1,
                                     v7,
                                     v11,
                                     BackTrace) )
        {
          Pool2 = v7 + 16;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v7);
      }
    }
LABEL_21:
    *(_QWORD *)this = 0LL;
LABEL_22:
    EngSetLastError(8u);
    return this;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
    goto LABEL_21;
  v5 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 272LL, v12);
  Pool2 = (__int64)v5;
  if ( !v5
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v5 = 1886221383LL,
        Pool2 = (__int64)(v5 + 2),
        v5 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      (const void *)0x706D7447);
  }
LABEL_16:
  *(_QWORD *)this = Pool2;
  if ( !Pool2 )
    goto LABEL_22;
  return this;
}
