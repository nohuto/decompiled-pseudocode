/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14031E7F0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14020A740 (VfAvlDeleteTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x140693190 (PiUpdateDriverDBCache.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407889E0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407C2788 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407E0334 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x14081B5CC (PiSwIrpStartCreateWorker.c)
 *     PiDmObjectManagerPopulate @ 0x14083B22C (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083E948 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140875F70 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088507C (PnpCleanupDeviceRegistryValues.c)
 *     IopCleanupFileObjectIosbRange @ 0x140944790 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140945FE8 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x14095B028 (PiDmListRemoveObjectWorker.c)
 *     PiSwBusRelationRemove @ 0x1409670B8 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140967170 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140967780 (PiSwProcessRemove.c)
 *     PopPowerRequestTableDeleteEntry @ 0x140981BAC (PopPowerRequestTableDeleteEntry.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x14099F800 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADFAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADFBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x14031E8A0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x14035FF48 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *RightChild; // rbx
  _RTL_GENERIC_COMPARE_RESULTS v5; // eax

  if ( !Table->NumberGenericTableElements )
    return 0;
  RightChild = Table->BalancedRoot.RightChild;
  while ( 1 )
  {
    v5 = Table->CompareRoutine(Table, Buffer, &RightChild[1]);
    if ( v5 == GenericLessThan )
    {
      RightChild = RightChild->LeftChild;
      goto LABEL_7;
    }
    if ( v5 != GenericGreaterThan )
      break;
    RightChild = RightChild->RightChild;
LABEL_7:
    if ( !RightChild )
      return 0;
  }
  if ( RightChild == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(RightChild);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, RightChild);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, RightChild);
  return 1;
}
