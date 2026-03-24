/*
 * XREFs of ZwReleaseMutant @ 0x1403FA7A0
 * Callers:
 *     BiReleaseBcdSyncMutant @ 0x140784774 (BiReleaseBcdSyncMutant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReleaseMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
