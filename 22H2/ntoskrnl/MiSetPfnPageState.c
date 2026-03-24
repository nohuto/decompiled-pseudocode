/*
 * XREFs of MiSetPfnPageState @ 0x1402AA590
 * Callers:
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402995B0 (MiUnlinkNodeLargePageHelper.c)
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MiFreeSlabEntry @ 0x140552B10 (MiFreeSlabEntry.c)
 *     MiDemotePfnListChain @ 0x14055E158 (MiDemotePfnListChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnPageState(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 34) ^= (*(_BYTE *)(a1 + 34) ^ a2) & 7;
}
