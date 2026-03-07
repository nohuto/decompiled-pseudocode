__int64 __fastcall PALLOCMEM(unsigned int a1, unsigned int a2)
{
  const void *v2; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v3; // rdi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // r14
  unsigned __int64 v11; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+120h] [rbp+77h] BYREF
  __int64 v16; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (const void *)a2;
  if ( !a1 )
    return 0LL;
  v3 = gpLeakTrackingAllocator;
  v4 = a1;
  v14 = a2;
  v16 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = a1;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(260LL, a1, a2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v15) )
      {
        v12[0] = &v16;
        v12[1] = &v14;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 (__int64)v3,
                 (__int64)v12,
                 &v11);
      }
      v10 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v4 += 16LL;
        v10 = 1;
        v11 = v4;
      }
      Pool2 = ExAllocatePool2(v9, v4, (unsigned int)v2);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v3,
                                  Pool2,
                                  v15,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v3,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2) || v4 + 16 < v4 )
    return 0LL;
  v8 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v14);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
        *v8 = v2,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v3 + 1),
      v2);
  }
  return Pool2;
}
