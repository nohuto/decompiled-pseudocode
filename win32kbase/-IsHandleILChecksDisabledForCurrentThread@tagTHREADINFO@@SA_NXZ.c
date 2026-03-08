/*
 * XREFs of ?IsHandleILChecksDisabledForCurrentThread@tagTHREADINFO@@SA_NXZ @ 0x1C0156570
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

bool __fastcall tagTHREADINFO::IsHandleILChecksDisabledForCurrentThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *((_DWORD *)PtiCurrentShared(a1, a2, a3, a4) + 387) == 0;
}
