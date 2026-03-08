/*
 * XREFs of PnpWatchdogSecondChanceCallback @ 0x14055EAB0
 * Callers:
 *     <none>
 * Callees:
 *     PnpWatchdogBugcheck @ 0x14055E314 (PnpWatchdogBugcheck.c)
 *     PnpWatchdogEtwWrite @ 0x14055E670 (PnpWatchdogEtwWrite.c)
 */

char __fastcall PnpWatchdogSecondChanceCallback(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !(_BYTE)dword_140D1D1EC && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v1 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v1) )
    PnpWatchdogBugcheck(a1);
  return PnpWatchdogEtwWrite(a1, 2);
}
