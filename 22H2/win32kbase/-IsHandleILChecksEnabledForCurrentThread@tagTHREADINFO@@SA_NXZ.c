/*
 * XREFs of ?IsHandleILChecksEnabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C00C48F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool tagTHREADINFO::IsHandleILChecksEnabledForCurrentThread(void)
{
  return *((_DWORD *)PtiCurrentShared() + 387) == 1;
}
