/*
 * XREFs of ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C0145710
 * Callers:
 *     GrePolyPolyline @ 0x1C0142500 (GrePolyPolyline.c)
 *     NtGdiRectangle @ 0x1C0143A10 (NtGdiRectangle.c)
 *     GrePolyPolygon @ 0x1C0144870 (GrePolyPolygon.c)
 *     NtGdiLineTo @ 0x1C0144E10 (NtGdiLineTo.c)
 *     NtGdiInvertRgn @ 0x1C0148D60 (NtGdiInvertRgn.c)
 *     GrePolyBezier @ 0x1C029FE00 (GrePolyBezier.c)
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
