/*
 * XREFs of ?_InterruptMarkDisconnecting@FxInterrupt@@CAEPEAX@Z @ 0x1C0009A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxInterrupt::_InterruptMarkDisconnecting(_BYTE *SyncContext)
{
  SyncContext[432] = 1;
  return 1;
}
