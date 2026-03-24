/*
 * XREFs of ZwSetTimerResolution @ 0x1403FD9E0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14036CDE4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
