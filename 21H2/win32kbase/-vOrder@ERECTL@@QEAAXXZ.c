/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C007FCD4
 * Callers:
 *     GreIntersectClipRect @ 0x1C0071A70 (GreIntersectClipRect.c)
 *     NtGdiCreateRectRgn @ 0x1C007FA80 (NtGdiCreateRectRgn.c)
 *     GreSetRectRgn @ 0x1C007FC00 (GreSetRectRgn.c)
 *     GreCreateRectRgn @ 0x1C009FA20 (GreCreateRectRgn.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00CB718 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
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
