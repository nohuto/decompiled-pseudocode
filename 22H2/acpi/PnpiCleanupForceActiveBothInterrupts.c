/*
 * XREFs of PnpiCleanupForceActiveBothInterrupts @ 0x1C002D1A0
 * Callers:
 *     ACPIInitResetDeviceExtension @ 0x1C002CF60 (ACPIInitResetDeviceExtension.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056438 (ACPIInitDeleteDeviceExtension.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C00B41DC (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpiCleanupForceActiveBothInterrupts(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 656);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x44706341u);
    *(_QWORD *)(a1 + 656) = 0LL;
  }
  *(_DWORD *)(a1 + 664) = -1;
}
