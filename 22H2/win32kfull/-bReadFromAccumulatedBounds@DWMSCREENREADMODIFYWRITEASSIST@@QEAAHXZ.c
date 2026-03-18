/*
 * XREFs of ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02A8980
 * Callers:
 *     NtGdiLineTo @ 0x1C015AE20 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C02A9D30 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C02ABFF0 (GrePolyBezier.c)
 *     GrePolyPolygon @ 0x1C02AC330 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C02AC620 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C02AD690 (NtGdiRectangle.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266514 (-bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C029A604 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  _QWORD **v1; // rax
  unsigned int v3; // ebx
  struct _RECTL v5; // [rsp+20h] [rbp-28h] BYREF

  v1 = (_QWORD **)*((_QWORD *)this + 3);
  v3 = 0;
  if ( *v1 )
  {
    if ( (unsigned int)GreGetBounds(**v1, &v5, 4LL) )
    {
      ERECTL::bOffsetSubtract(
        (ERECTL *)&v5,
        (const struct _POINTL *)(**((_QWORD **)this + 3) + 8LL * (*(_DWORD *)(**((_QWORD **)this + 3) + 40LL) & 1) + 1016),
        0);
      if ( !ERECTL::bEmpty((ERECTL *)&v5) )
        return DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(this, &v5);
    }
  }
  return v3;
}
