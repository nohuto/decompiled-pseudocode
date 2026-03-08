/*
 * XREFs of HUBHSM_WaitingForEnableInterruptsOnSx @ 0x1C00092D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_ReleaseWdfPowerReference @ 0x1C000DFE0 (HUBFDO_ReleaseWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_WaitingForEnableInterruptsOnSx(__int64 a1)
{
  HUBFDO_ReleaseWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
