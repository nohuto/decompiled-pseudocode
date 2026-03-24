/*
 * XREFs of MiFlushTbListEarly @ 0x1402DF198
 * Callers:
 *     MiDeleteVa @ 0x1402B8110 (MiDeleteVa.c)
 *     MiReplenishBitMap @ 0x1402DEAF0 (MiReplenishBitMap.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiDeleteEmptyPageTable @ 0x1403F4060 (MiDeleteEmptyPageTable.c)
 *     MiResetAccessBitPteWorker @ 0x14053B9C0 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, _KPROCESS *Process)
{
  unsigned __int64 v2; // r9
  char v3; // r10

  v2 = qword_140C4DF90;
  v3 = (char)Process;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0 && *(_DWORD *)a1 == 1 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process[2].Affinity.Bitmap[5] )
      v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (v3 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (v3 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1, Process);
  }
  return 1LL;
}
