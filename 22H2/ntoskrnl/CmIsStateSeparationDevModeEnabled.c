/*
 * XREFs of CmIsStateSeparationDevModeEnabled @ 0x1408662D8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationDevModeEnabled()
{
  return CmStateSeparationDevMode != 0;
}
