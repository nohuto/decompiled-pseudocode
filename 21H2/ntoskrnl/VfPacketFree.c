/*
 * XREFs of VfPacketFree @ 0x140A9C13C
 * Callers:
 *     ViPacketNotificationCallback @ 0x140A9C1B0 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14055F1D4 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140AA5D64 (VfIrpDatabaseUninitialize.c)
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
