/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1C010A840
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 */

__int64 W32kCddDisableGdiHwAcceleration()
{
  unsigned __int64 v0; // rbx

  v0 = 0LL;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    v0 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 648);
  return (v0 >> 34) & 1;
}
