/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1402DECF0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiUpdateDriverDBCache @ 0x14075E74C (PiUpdateDriverDBCache.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140768024 (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x14076A0A8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1407734A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlObjectEventWorker @ 0x140778830 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x140811940 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     EtwpFreeKeyNameList @ 0x140818900 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x140844A24 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x140933FE8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140935790 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x1409491C0 (PiDmListRemoveObjectWorker.c)
 *     PiSwBusRelationRemove @ 0x14095336C (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x14095341C (PiSwCloseDevice.c)
 *     PopPowerRequestTableDeleteEntry @ 0x14098A25C (PopPowerRequestTableDeleteEntry.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x14099EF9C (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140A9DA38 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140A9DB60 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     RealPredecessor @ 0x140253690 (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x1402DEDA0 (DeleteNodeFromTree.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
