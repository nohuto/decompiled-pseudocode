/*
 * XREFs of HUBHSM_LoggingHubWasReset @ 0x1C0008A50
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_LogHubResetRecoveryWasInvoked @ 0x1C007C76C (HUBFDO_LogHubResetRecoveryWasInvoked.c)
 */

__int64 __fastcall HUBHSM_LoggingHubWasReset(__int64 a1)
{
  HUBFDO_LogHubResetRecoveryWasInvoked(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
