/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140264B20
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140371B70 (VfAvlInsertReservedTreeNode.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1406BD178 (PiDqQueryAddObjectToResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x14074DE4C (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752BC0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E48C (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x140794898 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B324 (EtwpEnumerateAutologgerPath.c)
 *     PiDmObjectManagerPopulate @ 0x1407A2E40 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1407A3C28 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F85B4 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140264B90 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x140264DDC (FindNodeOrParent.c)
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
  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
