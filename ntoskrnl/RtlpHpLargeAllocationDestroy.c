/*
 * XREFs of RtlpHpLargeAllocationDestroy @ 0x1405B4EA0
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x14020DC8C (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x1402B6D30 (RtlpHpMetadataFree.c)
 */

__int64 __fastcall RtlpHpLargeAllocationDestroy(__int64 a1, __int128 *a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r10
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = ((v4 >> 12) + ((v4 >> 1) & 1)) << 12;
  v7 = *a2;
  v8 = (1LL << ((unsigned __int8)v4 >> 2))
     - (((1LL << ((unsigned __int8)v4 >> 2)) - 1) & (v5 + (1LL << ((unsigned __int8)v4 >> 2)) - 1))
     + v5
     - 1;
  RtlpHpFreeVA(&v9, (unsigned __int64 *)&v8, 0x8000, &v7);
  v7 = *a2;
  return RtlpHpMetadataFree(a1, &v7);
}
