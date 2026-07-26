/*
 * XREFs of ndisCmCleanupWorkRoutine @ 0x1C0127560
 * Callers:
 *     <none>
 * Callees:
 *     ndisCmCleanupSessionState @ 0x1C00B1688 (ndisCmCleanupSessionState.c)
 */

void ndisCmCleanupWorkRoutine()
{
  _InterlockedExchange(&dword_1C00E7348, 0);
  if ( dword_1C00E71A8 )
    ndisCmCleanupSessionState();
}
