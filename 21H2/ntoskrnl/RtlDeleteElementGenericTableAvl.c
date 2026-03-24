/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1402648C0
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14037EB38 (VfAvlDeleteTreeNode.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x14062BBB0 (PopCreatePowerRequestObject.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14062DB80 (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14062E5EC (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x140633ED8 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDeleteEntryById @ 0x14067C4A0 (PopPowerRequestDeleteEntryById.c)
 *     PiDmListRemoveObjectWorker @ 0x140730B1C (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x140732BD8 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732C94 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x1407349F0 (PiSwCloseDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140736390 (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1407488F8 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14074A010 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DBB8 (PiSwIrpStartCreateWorker.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E48C (PiUpdateDriverDBCache.c)
 *     EtwpFreeKeyNameList @ 0x14079C1E0 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A2E40 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x140891398 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892814 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408F86B4 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140264970 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1402CB1A8 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
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
