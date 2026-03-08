/*
 * XREFs of ?DoesProcessOwnProtectedOutput@CMonitorPDO@OPM@@QEBAEPEAX@Z @ 0x1C017EC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(void **this, void *a2)
{
  return a2 == this[7];
}
