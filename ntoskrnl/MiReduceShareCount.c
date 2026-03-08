/*
 * XREFs of MiReduceShareCount @ 0x1402EADCC
 * Callers:
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeleteNonPagedPoolTail @ 0x1402EAD40 (MiDeleteNonPagedPoolTail.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3 ^ (((v3 & 0x3FFFFFFFFFFFFFFFLL) - a2) ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v3 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
