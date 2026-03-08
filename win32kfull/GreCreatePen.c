/*
 * XREFs of GreCreatePen @ 0x1C00E8908
 * Callers:
 *     NtGdiCreatePen @ 0x1C00E88F0 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BD6A4 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     GreExtCreatePen @ 0x1C00E8994 (GreExtCreatePen.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, int a2, int a3, __int64 a4)
{
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a1 <= 4 || a1 - 5 < 2 )
    return GreExtCreatePen(a1, a2, 0, a3, 0LL, 0, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
