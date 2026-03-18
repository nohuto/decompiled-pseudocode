/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1402DE820
 * Callers:
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140811940 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     EtwpFreeKeyNameList @ 0x140818900 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x140844A24 (PiDmObjectManagerPopulate.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfAvlEnumerateNodes @ 0x140A9B230 (VfAvlEnumerateNodes.c)
 *     VfPtGenerateTraceInformation @ 0x140A9D738 (VfPtGenerateTraceInformation.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1402DEA50 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
