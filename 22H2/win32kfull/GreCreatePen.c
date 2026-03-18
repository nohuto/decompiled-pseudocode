/*
 * XREFs of GreCreatePen @ 0x1C00AECD8
 * Callers:
 *     NtGdiCreatePen @ 0x1C00AECC0 (NtGdiCreatePen.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BC500 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     GreExtCreatePen @ 0x1C00AED64 (GreExtCreatePen.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GreCreatePen(unsigned int a1, int a2, int a3, __int64 a4)
{
  W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a1 <= 4 || a1 - 5 < 2 )
    return GreExtCreatePen(a1, a2, 0, a3, 0LL, 0, 0, 0LL, 0, 1, a4);
  EngSetLastError(0x57u);
  return 0LL;
}
