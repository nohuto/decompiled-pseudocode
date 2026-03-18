/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1402DEF50
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406DF8F0 (PiDqQueryAddObjectToResultSet.c)
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     PiSwBusRelationAdd @ 0x140764970 (PiSwBusRelationAdd.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14076ACE4 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopPowerRequestStatsCreate @ 0x1407F0070 (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestTableInsertEntry @ 0x1407F0194 (PopPowerRequestTableInsertEntry.c)
 *     EtwpEnumerateKeyProviders @ 0x140818934 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x140826EF0 (PiDcInitUpdateProperties.c)
 *     PiDmObjectManagerPopulate @ 0x140844A24 (PiDmObjectManagerPopulate.c)
 *     EtwpInitializeAutoLoggers @ 0x140851328 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnumerateAutologgerPath @ 0x1408515A8 (EtwpEnumerateAutologgerPath.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x14099EE9C (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140A9D4F0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140A9D980 (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1402DEFC0 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent_0 @ 0x1402DF210 (FindNodeOrParent_0.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent[0] = 0LL;
  SearchResult = (unsigned int)FindNodeOrParent_0(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
