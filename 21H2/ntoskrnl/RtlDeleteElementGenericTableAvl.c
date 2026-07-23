/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140252950
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14037E688 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140623674 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDeleteEntryById @ 0x14066FFE4 (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x140670788 (PopCreatePowerRequestObject.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x140670FF8 (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDmListRemoveObjectWorker @ 0x140730CE8 (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x140732D98 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732E54 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140734BB0 (PiSwCloseDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736550 (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140748AB8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A1D0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E64C (PiUpdateDriverDBCache.c)
 *     EtwpFreeKeyNameList @ 0x14079C3E0 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3040 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408914F8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892974 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408F8814 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     RealPredecessor @ 0x140249A98 (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x140252A00 (DeleteNodeFromTree.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
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
