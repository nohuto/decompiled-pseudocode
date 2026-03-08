/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnReset @ 0x1C00086E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueSurpriseRemovalToAllPSMs @ 0x1C0010C6C (HUBMUX_QueueSurpriseRemovalToAllPSMs.c)
 *     HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased @ 0x1C0010D98 (HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased.c)
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnReset(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(v1);
  HUBMUX_QueueSurpriseRemovalToAllPSMs(v1);
  return v2;
}
