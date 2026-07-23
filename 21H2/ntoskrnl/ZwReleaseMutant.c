/*
 * XREFs of ZwReleaseMutant @ 0x1403FA980
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140784934 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseMutant(HANDLE MutantHandle, PLONG PreviousCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MutantHandle);
}
