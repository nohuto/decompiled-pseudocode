/*
 * XREFs of MiMarkLockedChainAsProtected @ 0x1402D3390
 * Callers:
 *     MiSharedInsertPfnChainInList @ 0x140288400 (MiSharedInsertPfnChainInList.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1402D3138 (MiExclusiveInsertPfnChainInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMarkLockedChainAsProtected(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  for ( result = *(_QWORD *)(a1 + 16); result != 0x3FFFFFFFFFLL; *(_BYTE *)(v2 + 35) |= 8u )
  {
    v2 = 48 * result - 0x220000000000LL;
    result = *(_QWORD *)v2 & 0xFFFFFFFFFFLL;
  }
  return result;
}
