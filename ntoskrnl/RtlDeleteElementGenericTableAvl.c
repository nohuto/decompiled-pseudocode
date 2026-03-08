/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140244F40
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140680BEC (PiDmRemoveCacheReferenceForObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PopPowerRequestDelete @ 0x14073B0E0 (PopPowerRequestDelete.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x140791164 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiUpdateDriverDBCache @ 0x14079D924 (PiUpdateDriverDBCache.c)
 *     PiSwIrpStartCreateWorker @ 0x140806A2C (PiSwIrpStartCreateWorker.c)
 *     PiDmObjectManagerPopulate @ 0x14083A17C (PiDmObjectManagerPopulate.c)
 *     EtwpFreeKeyNameList @ 0x14083D658 (EtwpFreeKeyNameList.c)
 *     PopPowerRequestStatsOnSleepstudySessionChange @ 0x1408730B0 (PopPowerRequestStatsOnSleepstudySessionChange.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088039C (PnpCleanupDeviceRegistryValues.c)
 *     IopCleanupFileObjectIosbRange @ 0x140941770 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140958008 (PiDmListRemoveObjectWorker.c)
 *     PiSwBusRelationRemove @ 0x140964098 (PiSwBusRelationRemove.c)
 *     PiSwCloseDevice @ 0x140964150 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140964760 (PiSwProcessRemove.c)
 *     PopPowerRequestTableDeleteEntry @ 0x14097EAFC (PopPowerRequestTableDeleteEntry.c)
 *     PopDirectedDripsUmDirectedFxRemoveTestDevice @ 0x14099C770 (PopDirectedDripsUmDirectedFxRemoveTestDevice.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 *     VfPtProcessFreePoolInfo @ 0x140ADBAD0 (VfPtProcessFreePoolInfo.c)
 *     ViPtDeleteAvlTrees @ 0x140ADBBF0 (ViPtDeleteAvlTrees.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140244FF0 (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x1402F4B58 (RealPredecessor.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
