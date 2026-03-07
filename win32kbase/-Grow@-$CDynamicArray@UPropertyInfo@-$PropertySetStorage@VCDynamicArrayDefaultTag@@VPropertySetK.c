__int64 __fastcall CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Grow(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // r14d
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v6; // rsi
  int v7; // eax
  __int64 Pool2; // rdi
  _QWORD *v10; // rax
  char v11; // r12
  _QWORD v12[2]; // [rsp+20h] [rbp-99h] BYREF
  PVOID BackTrace[28]; // [rsp+30h] [rbp-89h] BYREF
  unsigned __int64 v14; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v15; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+130h] [rbp+77h] BYREF
  __int64 v17; // [rsp+138h] [rbp+7Fh] BYREF

  v15 = a2;
  v3 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
    return (unsigned int)-1073741675;
  v4 = 0;
  if ( v3 <= *(_DWORD *)(a1 + 12) )
    return v4;
  v12[0] = (v3 * (unsigned __int128)8u) >> 64;
  v5 = 8LL * v3;
  if ( !is_mul_ok(v3, 8uLL) )
    return (unsigned int)-1073741675;
  v6 = gpLeakTrackingAllocator;
  v17 = 8LL * v3;
  v15 = 2003858261;
  v16 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(262LL, 8LL * v3, 2003858261LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v6 + 14);
LABEL_7:
    if ( Pool2 )
      goto LABEL_8;
    return (unsigned int)-1073741801;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x77707355u)
      || v5 + 16 < v5 )
    {
      return (unsigned int)-1073741801;
    }
    v10 = (_QWORD *)ExAllocatePool2(v16 | 2, v5 + 16, v15);
    Pool2 = (__int64)v10;
    if ( !v10
      || (_InterlockedIncrement64((volatile signed __int64 *)v6 + 14),
          *v10 = 2003858261LL,
          Pool2 = (__int64)(v10 + 2),
          v10 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        (const void *)0x77707355);
    }
    goto LABEL_7;
  }
  if ( v7 != 2 )
    return (unsigned int)-1073741801;
  v14 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x77707355u, &v14) )
  {
    v12[0] = &v16;
    v12[1] = &v15;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
              v6,
              v12,
              &v17);
    goto LABEL_7;
  }
  v11 = 0;
  if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
  {
    v5 += 16LL;
    v11 = 1;
    v17 = v5;
  }
  Pool2 = ExAllocatePool2(262LL, v5, 2003858261LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  _InterlockedIncrement64((volatile signed __int64 *)v6 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            v14,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_7;
    }
LABEL_32:
    _InterlockedIncrement64((volatile signed __int64 *)v6 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           v14,
                           BackTrace) )
    goto LABEL_32;
LABEL_8:
  if ( *(_QWORD *)a1 )
  {
    memmove((void *)Pool2, *(const void **)a1, 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD *)a1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)a1);
  }
  *(_QWORD *)a1 = Pool2;
  *(_DWORD *)(a1 + 12) = v3;
  return v4;
}
