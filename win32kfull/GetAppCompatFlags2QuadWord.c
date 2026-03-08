/*
 * XREFs of GetAppCompatFlags2QuadWord @ 0x1C00F4870
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetAppCompatFlags2QuadWord(struct tagTHREADINFO *a1)
{
  if ( !a1 )
    a1 = PtiCurrentShared(0LL);
  return *((_QWORD *)a1 + 81);
}
