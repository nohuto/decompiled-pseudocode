/*
 * XREFs of IopFreeRelationList @ 0x14074A6C8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140749CC4 (PnpProcessQueryRemoveAndEject.c)
 *     IopAllocateRelationList @ 0x14074A604 (IopAllocateRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14074A960 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x14074AF10 (PnpInvalidateRelationsInList.c)
 *     PnpBuildRemovalRelationList @ 0x14074C04C (PnpBuildRemovalRelationList.c)
 *     PipRemoveDevicesInRelationList @ 0x14074CDB8 (PipRemoveDevicesInRelationList.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408A22D0 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x1408A2500 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x14074A718 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  void *v1; // rdi

  if ( P )
  {
    v1 = (void *)*P;
    if ( *P )
    {
      PiClearDeviceObjectList(*P);
      ExFreePoolWithTag(v1, 0);
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
