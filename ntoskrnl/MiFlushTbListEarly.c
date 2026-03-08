/*
 * XREFs of MiFlushTbListEarly @ 0x140229404
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MiDeleteEmptyPageTable @ 0x1402EBB20 (MiDeleteEmptyPageTable.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiResetAccessBitPteWorker @ 0x140463BAC (MiResetAccessBitPteWorker.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 * Callees:
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 */

__int64 __fastcall MiFlushTbListEarly(__int64 a1, char a2)
{
  unsigned __int64 v2; // r9

  v2 = qword_140C65810;
  if ( (*(_BYTE *)(a1 + 4) & 2) == 0
    && *(_DWORD *)a1 == 1
    && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
  {
    v2 = -1LL;
  }
  if ( *(_DWORD *)(a1 + 12) < *(_DWORD *)(a1 + 8) && !*(_BYTE *)(a1 + 5) && *(_QWORD *)(a1 + 16) <= v2 )
    return 0LL;
  if ( (a2 & 2) == 0 )
  {
    if ( v2 < 0x400 || *(_BYTE *)(a1 + 5) )
    {
      if ( (a2 & 1) == 0 )
        return 0LL;
      *(_BYTE *)(a1 + 5) = 1;
    }
    MiFlushTbList(a1);
  }
  return 1LL;
}
