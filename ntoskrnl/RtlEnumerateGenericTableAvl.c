/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1402EF150
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14083A17C (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083D658 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x1408730B0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140AD92A4 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140ADB7D8 (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402EF180 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
