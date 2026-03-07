__int64 __fastcall Win32AllocPoolZInit(unsigned __int64 a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  const void *v3; // rsi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // r14
  _QWORD v11[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v13; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v14; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = (const void *)a2;
  v4 = a1;
  v14 = a2;
  v15 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v16 = a1;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(260LL, a1, a2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v13 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v13) )
      {
        v11[0] = &v15;
        v11[1] = &v14;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 v2,
                 v11,
                 &v16);
      }
      v10 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v4 += 16LL;
        v10 = 1;
        v16 = v4;
      }
      Pool2 = ExAllocatePool2(v9, v4, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v2,
                                  Pool2,
                                  v13,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v2,
                                     Pool2,
                                     v13,
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
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2) || v4 + 16 < v4 )
    return 0LL;
  v8 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v14);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v8 = v3,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      v3);
  }
  return Pool2;
}
