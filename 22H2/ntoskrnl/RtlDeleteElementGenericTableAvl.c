/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x14032DA20
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14037E4A8 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1406A73D4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1406ACCB8 (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDeleteEntryById @ 0x1406F5694 (PopPowerRequestDeleteEntryById.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406F5C6C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopCreatePowerRequestObject @ 0x1406F5E38 (PopCreatePowerRequestObject.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406F7610 (PopAvlDeleteStatsForPowerRequest.c)
 *     PiDmListRemoveObjectWorker @ 0x140730E70 (PiDmListRemoveObjectWorker.c)
 *     PiSwProcessRemove @ 0x140732F28 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140732FE4 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140734D40 (PiSwCloseDevice.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140744D98 (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1407464B0 (PiPnpRtlObjectEventWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14074A844 (PnpCleanupDeviceRegistryValues.c)
 *     PiSwIrpStartCreateWorker @ 0x14074CF08 (PiSwIrpStartCreateWorker.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407721E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 *     PiUpdateDriverDBCache @ 0x14077E38C (PiUpdateDriverDBCache.c)
 *     EtwpFreeKeyNameList @ 0x140797070 (EtwpFreeKeyNameList.c)
 *     PiDmObjectManagerPopulate @ 0x1407A3270 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408913E8 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x1408F8704 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 * Callees:
 *     RealPredecessor @ 0x1403247C8 (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x14032DAD0 (DeleteNodeFromTree.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
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
