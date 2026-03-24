/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0080F64
 * Callers:
 *     GreIntersectClipRect @ 0x1C0072520 (GreIntersectClipRect.c)
 *     NtGdiCreateRectRgn @ 0x1C0080D10 (NtGdiCreateRectRgn.c)
 *     GreSetRectRgn @ 0x1C0080E90 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C00A07E0 (GreCreateRectRgn.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB878 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}
