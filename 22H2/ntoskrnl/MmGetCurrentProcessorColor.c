/*
 * XREFs of MmGetCurrentProcessorColor @ 0x1402F4110
 * Callers:
 *     MiAddSecureEntry @ 0x14061FBE0 (MiAddSecureEntry.c)
 *     MiReserveUserMemory @ 0x140637BF0 (MiReserveUserMemory.c)
 *     MiInsertSharedCommitNode @ 0x140638E70 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x140639820 (MiMapViewOfDataSection.c)
 * Callees:
 *     <none>
 */

USHORT MmGetCurrentProcessorColor(void)
{
  return KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
}
