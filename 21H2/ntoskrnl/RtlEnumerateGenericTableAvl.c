/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1402C9AF0
 * Callers:
 *     EtwpFreeKeyNameList @ 0x14079C1E0 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A2E40 (PiDmObjectManagerPopulate.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F6690 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1409E0658 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140264490 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
