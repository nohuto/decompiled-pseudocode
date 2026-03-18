/*
 * XREFs of VfPacketFree @ 0x140ADE104
 * Callers:
 *     ViPacketNotificationCallback @ 0x140ADE170 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14055F628 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140AE2A84 (VfIrpDatabaseUninitialize.c)
 */

void __fastcall VfPacketFree(_QWORD *Entry)
{
  void *v2; // rcx

  v2 = (void *)Entry[28];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x6D646C56u);
  ExFreeToNPagedLookasideList(&ViPacketLookaside, Entry);
  if ( !_InterlockedDecrement(&ViPacketCount) && IovIsDisabledWithoutReboot() )
    VfIrpDatabaseUninitialize();
}
