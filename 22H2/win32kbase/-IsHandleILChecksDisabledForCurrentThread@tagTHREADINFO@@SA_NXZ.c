/*
 * XREFs of ?IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C012EF90
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool tagTHREADINFO::IsHandleILChecksDisabledForCurrentThread(void)
{
  return *((_DWORD *)PtiCurrentShared() + 387) == 0;
}
