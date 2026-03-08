/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1402451A0
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140303A48 (VfAvlInsertReservedTreeNode.c)
 *     PopPowerRequestTableInsertEntry @ 0x14073C0A4 (PopPowerRequestTableInsertEntry.c)
 *     PopPowerRequestStatsCreate @ 0x14073C194 (PopPowerRequestStatsCreate.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140791724 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140792BF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUpdateDriverDBCache @ 0x14079D924 (PiUpdateDriverDBCache.c)
 *     EtwpEnumerateKeyProviders @ 0x1407FD288 (EtwpEnumerateKeyProviders.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1408076A8 (PiSwBusRelationAdd.c)
 *     PiDmObjectManagerPopulate @ 0x14083A17C (PiDmObjectManagerPopulate.c)
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 *     PiDcInitUpdateProperties @ 0x14084CF78 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxAddTestDevice @ 0x14099C670 (PopDirectedDripsUmDirectedFxAddTestDevice.c)
 *     VfPtAddStackInfoIfNotExist @ 0x140ADB5A0 (VfPtAddStackInfoIfNotExist.c)
 *     VfPtProcessAllocPoolInfo @ 0x140ADBA18 (VfPtProcessAllocPoolInfo.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x140245260 (RtlInsertElementGenericTableFullAvl.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
