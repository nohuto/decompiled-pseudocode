/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x1800069A0
 * Callers:
 *     RtlpHpFreeHeap @ 0x180024920 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180025710 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1800281F0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

struct _PEB *__fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rsi
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edx
  __int16 v14; // dx
  int v15; // ebx
  __int64 v16; // rax
  struct _PEB *result; // rax
  __int64 v18; // rbx
  struct _PEB **v19; // rcx
  char v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v10 = (_BYTE *)(v7 + 56);
    v11 = v5 - 2;
    do
    {
      *v10 &= ~1u;
      v10 += 32;
      --v11;
    }
    while ( v11 );
  }
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64);
  v12 = *(unsigned __int8 *)(a2 + 31);
  v13 = *(_DWORD *)(a2 + 28);
  v20 = -1;
  v14 = ~(_WORD)v13;
  if ( v12 == v5 )
  {
    LOWORD(v15) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v15 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v15;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v14 - v15);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v16 = RtlpHpSegPageRangeCoalesce(a1, v7, a4, 0, (__int64)&v20);
  result = (struct _PEB *)RtlpHpSegFreeRangeInsert(a1, v16, 0LL);
  v18 = (__int64)result;
  if ( result )
  {
    result = *(struct _PEB **)&result->InheritedAddressSpace;
    if ( result->Mutant != (void *)v18 || (v19 = *(struct _PEB ***)(v18 + 8), *v19 != (struct _PEB *)v18) )
      __fastfail(3u);
    *v19 = result;
    result->Mutant = v19;
    --*(_QWORD *)(a1 + 88);
  }
  if ( (a4 & 1) == 0 )
    result = (struct _PEB *)RtlReleaseSRWLockExclusive(a1 + 64);
  if ( v18 )
    return RtlpHpSegSegmentFree(a1, v18, 0x7FFFFFFFu, 1);
  return result;
}
