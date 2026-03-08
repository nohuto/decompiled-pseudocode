/*
 * XREFs of WaitForCommandComplete @ 0x1C0025544
 * Callers:
 *     NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023ED4 (NVMeSetNonOperationalPowerStatePermissiveMode.c)
 * Callees:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall WaitForCommandComplete(int a1)
{
  return WaitForCommandCompleteWithCustomTimeout(a1);
}
