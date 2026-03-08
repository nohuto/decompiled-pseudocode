/*
 * XREFs of RaspGetUnscaledGlyphData @ 0x140382708
 * Callers:
 *     RaspRasterize @ 0x140382470 (RaspRasterize.c)
 * Callees:
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     RaspLoadBearings @ 0x14038307C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403832FC (RaspMapGlyphIndexToLocation.c)
 *     RaspLoadGlyphData @ 0x140383DAC (RaspLoadGlyphData.c)
 *     RaspConvertDeltas @ 0x140383E44 (RaspConvertDeltas.c)
 *     RaspMapCharacterCodeToGlyphIndex @ 0x140383EE8 (RaspMapCharacterCodeToGlyphIndex.c)
 */

__int64 __fastcall RaspGetUnscaledGlyphData(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int16 v10; // si
  int v11; // eax
  _QWORD *v12; // r15
  int GlyphData; // eax
  int Bearings; // edi
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF

  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v10 = 0;
  if ( (int)RaspMapCharacterCodeToGlyphIndex(v6, a2, &v17) >= 0 )
    v10 = v17;
  v11 = RaspMapGlyphIndexToLocation(a1, v10, &v18);
  v12 = a5;
  if ( v11 >= 0 || (v10 = 0, Bearings = RaspMapGlyphIndexToLocation(a1, 0LL, &v18), Bearings >= 0) )
  {
    v17 = v10;
    GlyphData = RaspLoadGlyphData(a1, v18, (unsigned int)&v17, (unsigned int)&v16, (__int64)v12);
    v7 = v16;
    Bearings = GlyphData;
    if ( GlyphData >= 0 )
    {
      Bearings = RaspConvertDeltas(v16);
      if ( Bearings >= 0 )
        Bearings = RaspLoadBearings(a1, v17, v7, a4);
    }
  }
  if ( a3 )
  {
    *a3 = v7;
    v7 = 0LL;
  }
  if ( v7 )
    RaspFreeMemory(v7, v12);
  return (unsigned int)Bearings;
}
