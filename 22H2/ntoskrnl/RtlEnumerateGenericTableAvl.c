/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1403710D0
 * Callers:
 *     PiDmObjectManagerPopulate @ 0x14083B22C (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083E948 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875F70 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140ADD2A4 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140ADF7D8 (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140ADFBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140371100 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
