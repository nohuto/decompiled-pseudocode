/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140252BB0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1403716C0 (VfAvlInsertReservedTreeNode.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14061C390 (PiDqQueryAddObjectToResultSet.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x14074E00C (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140752D80 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E64C (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x1407946F0 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3040 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1407A3E28 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F8714 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140252C20 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent_0 @ 0x140252E6C (FindNodeOrParent_0.c)
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
