/*
 * XREFs of GreCreateCompatibleHalftonePalette @ 0x1C00E9A48
 * Callers:
 *     NtGdiCreateHalftonePalette @ 0x1C00E9A30 (NtGdiCreateHalftonePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreCreateCompatibleHalftonePalette(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 *v5; // [rsp+50h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp-10h]

  v6 = 0;
  v5 = 0LL;
  if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v5, 1u, 0x100u, aPalHalftone, 0, 0, 0, 0x100500u, a2 & 8) )
  {
    *((_DWORD *)v5 + 6) |= 0x100000u;
    v6 = 1;
    v3 = *v5;
    if ( (a2 & 2) != 0 )
      v5 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v5);
  return v3;
}
