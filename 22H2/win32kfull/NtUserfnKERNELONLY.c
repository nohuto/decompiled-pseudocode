/*
 * XREFs of NtUserfnKERNELONLY @ 0x1C01E2700
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserfnKERNELONLY(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PtiCurrentShared(a1, a2, a3, a4);
  return 0LL;
}
