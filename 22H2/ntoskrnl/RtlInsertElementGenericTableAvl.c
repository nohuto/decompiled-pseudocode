/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14032DC80
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140372350 (VfAvlInsertReservedTreeNode.c)
 *     PiDqQueryAddObjectToResultSet @ 0x14069FF88 (PiDqQueryAddObjectToResultSet.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406F5C6C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x14074D19C (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407523B0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407721E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E38C (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407961B4 (EtwpEnumerateAutologgerPath.c)
 *     EtwpEnumerateKeyProviders @ 0x140797DFC (EtwpEnumerateKeyProviders.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3270 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1407A4058 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x1408F8604 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14032DCF0 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent_0 @ 0x14032DF3C (FindNodeOrParent_0.c)
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
