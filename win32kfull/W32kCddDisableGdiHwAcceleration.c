/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1C00E8850
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 W32kCddDisableGdiHwAcceleration()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rcx

  v0 = 0LL;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    v0 = *((_QWORD *)PtiCurrentShared(v1) + 81);
  return (v0 >> 34) & 1;
}
