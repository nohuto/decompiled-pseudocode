/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x1402483E0
 * Callers:
 *     EtwpFreeKeyNameList @ 0x14079C3E0 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3040 (PiDmObjectManagerPopulate.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 *     VfAvlEnumerateNodes @ 0x1409E1658 (VfAvlEnumerateNodes.c)
 * Callees:
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x140252520 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 */

PVOID __stdcall RtlEnumerateGenericTableAvl(PRTL_AVL_TABLE Table, BOOLEAN Restart)
{
  if ( Restart )
    Table->RestartKey = 0LL;
  return RtlEnumerateGenericTableWithoutSplayingAvl(Table, (PVOID *)&Table->RestartKey);
}
