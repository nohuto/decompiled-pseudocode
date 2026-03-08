/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x140861AD8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return CmStateSeparationDevMode != 0;
}
