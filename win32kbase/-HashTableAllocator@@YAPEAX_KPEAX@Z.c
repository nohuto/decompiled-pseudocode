__int64 __fastcall HashTableAllocator(unsigned __int64 a1, void *a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 v3; // rbx
  int v4; // eax
  __int64 Pool2; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r10
  char v9; // si
  unsigned __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v13; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v13 = 1987330371;
  v3 = a1;
  v15 = 260LL;
  v10 = a1;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, a1, 1987330371LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76744143u, &v14) )
      {
        v11[0] = &v15;
        v11[1] = &v13;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 (__int64)v2,
                 (__int64)v11,
                 &v10);
      }
      v9 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v3 += 16LL;
        v9 = 1;
        v10 = v3;
      }
      Pool2 = ExAllocatePool2(v8, v3, 1987330371LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v2,
                                  Pool2,
                                  v14,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v2,
                                     Pool2,
                                     v14,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76744143u)
    || v3 + 16 < v3 )
  {
    return 0LL;
  }
  v7 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, v3 + 16, v13);
  Pool2 = (__int64)v7;
  if ( !v7
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v7 = 1987330371LL,
        Pool2 = (__int64)(v7 + 2),
        v7 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x76744143);
  }
  return Pool2;
}
