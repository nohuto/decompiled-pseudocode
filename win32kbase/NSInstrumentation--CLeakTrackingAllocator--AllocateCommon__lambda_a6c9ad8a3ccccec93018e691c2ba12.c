__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_a6c9ad8a3ccccec93018e691c2ba1200___(
        int *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __m128i *a4)
{
  int v4; // eax
  const void *v6; // rbp
  unsigned __int64 v7; // rdi
  __int64 result; // rax
  _QWORD *Pool2; // rax
  __int64 v11; // rdi
  char v12; // bp
  __m128i v13; // [rsp+20h] [rbp-C8h] BYREF
  PVOID BackTrace[23]; // [rsp+30h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+F8h] [rbp+10h] BYREF

  v16 = a2;
  v4 = *a1;
  v6 = (const void *)a3;
  v7 = a2;
  if ( *a1 )
  {
    if ( v4 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)a1,
             a3)
        && v7 + 16 >= v7 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(
                            *(_QWORD *)a4->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL | 1,
                            v7 + 16,
                            *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
        v11 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)a1 + 14),
              *Pool2 = v6,
              v11 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)a1 + 1),
            v6);
        }
        return v11;
      }
    }
    else if ( v4 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              (NSInstrumentation::CLeakTrackingAllocator *)a1,
              a3,
              &v15) )
      {
        v13 = *a4;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                 a1,
                 &v13,
                 &v16);
      }
      v12 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v12 = 1;
        v16 = v7;
      }
      v11 = ExAllocatePool2(
              *(_QWORD *)a4->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL | 1,
              v7,
              *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
      if ( v11 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v12 && (unsigned __int64)(v11 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  a1,
                                  v11,
                                  v15,
                                  BackTrace) )
            return v11 + 16;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     a1,
                                     v11,
                                     v15,
                                     BackTrace) )
        {
          return v11;
        }
        _InterlockedIncrement64((volatile signed __int64 *)a1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v11);
      }
    }
    return 0LL;
  }
  result = ExAllocatePool2(
             *(_QWORD *)a4->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL | 1,
             a2,
             *(unsigned int *)_mm_srli_si128(*a4, 8).m128i_u32[0]);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 14);
  return result;
}
