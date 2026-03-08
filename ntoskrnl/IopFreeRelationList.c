/*
 * XREFs of IopFreeRelationList @ 0x140863634
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x140862D2C (PnpBuildRemovalRelationList.c)
 *     IopAllocateRelationList @ 0x140863684 (IopAllocateRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x14087CBE8 (PnpInvalidateRelationsInList.c)
 *     PipRemoveDevicesInRelationList @ 0x14087CF0C (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14087E79C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessCompletedEject @ 0x140956080 (PnpProcessCompletedEject.c)
 * Callees:
 *     PiClearDeviceObjectList @ 0x140863824 (PiClearDeviceObjectList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
