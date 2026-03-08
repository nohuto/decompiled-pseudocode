/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C029CD84
 * Callers:
 *     NtGdiLineTo @ 0x1C014DFE0 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C02AC2A0 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C02AE500 (GrePolyBezier.c)
 *     GrePolyPolygon @ 0x1C02AE850 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C02AEB40 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C02AFBE0 (NtGdiRectangle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop(DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 *v1; // rax
  unsigned int v2; // ecx
  __int64 v3; // rdx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v2 = 0;
  v3 = *v1;
  if ( *v1 && *(_DWORD *)(v3 + 492) )
    return (*(_DWORD *)(v3 + 36) & 0x4000) != 0;
  return v2;
}
