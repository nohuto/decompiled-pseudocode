/*
 * XREFs of VfPacketFree @ 0x140ADA104
 * Callers:
 *     ViPacketNotificationCallback @ 0x140ADA170 (ViPacketNotificationCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     IovIsDisabledWithoutReboot @ 0x14055D188 (IovIsDisabledWithoutReboot.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfIrpDatabaseUninitialize @ 0x140ADEA84 (VfIrpDatabaseUninitialize.c)
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
