/*
 * XREFs of ZwReleaseMutant @ 0x1403F9E20
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140784674 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
