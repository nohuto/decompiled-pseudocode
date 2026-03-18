/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x14031EA50
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14020A3CC (VfAvlInsertReservedTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PopPowerRequestTableInsertEntry @ 0x1407A7CB4 (PopPowerRequestTableInsertEntry.c)
 *     PopPowerRequestStatsCreate @ 0x1407A7CEC (PopPowerRequestStatsCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1407E0934 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1407E22C8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     EtwpEnumerateKeyProviders @ 0x14080B5F4 (EtwpEnumerateKeyProviders.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x14081C248 (PiSwBusRelationAdd.c)
 *     PiDmObjectManagerPopulate @ 0x14083B22C (PiDmObjectManagerPopulate.c)
 *     EtwpInitializeAutoLoggers @ 0x14083D85C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083DAD8 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x140850328 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x14099F700 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140ADF5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADFA18 (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x14031EB10 (RtlInsertElementGenericTableFullAvl.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  _RTL_BALANCED_LINKS *NodeOrParent; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v9; // eax
  TABLE_SEARCH_RESULT SearchResult; // eax

  NodeOrParent = 0LL;
  if ( Table->NumberGenericTableElements )
  {
    for ( NodeOrParent = Table->BalancedRoot.RightChild; ; NodeOrParent = NodeOrParent->RightChild )
    {
      while ( 1 )
      {
        v9 = Table->CompareRoutine(Table, Buffer, &NodeOrParent[1]);
        if ( v9 )
          break;
        if ( !NodeOrParent->LeftChild )
        {
          SearchResult = TableInsertAsLeft;
          return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
        }
        NodeOrParent = NodeOrParent->LeftChild;
      }
      if ( v9 != GenericGreaterThan )
        break;
      if ( !NodeOrParent->RightChild )
      {
        SearchResult = TableInsertAsRight;
        return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
      }
    }
    SearchResult = TableFoundNode;
  }
  else
  {
    SearchResult = TableEmptyTree;
  }
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent, SearchResult);
}
