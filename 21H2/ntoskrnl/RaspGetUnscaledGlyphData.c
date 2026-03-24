/*
 * XREFs of RaspGetUnscaledGlyphData @ 0x1403B2524
 * Callers:
 *     RaspRasterize @ 0x1403B233C (RaspRasterize.c)
 * Callees:
 *     RaspFreeMemory @ 0x1403B2508 (RaspFreeMemory.c)
 *     RaspLoadBearings @ 0x1403B300C (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x1403B3160 (RaspMapGlyphIndexToLocation.c)
 *     RaspConvertDeltas @ 0x1403B3A68 (RaspConvertDeltas.c)
 *     RaspLoadGlyphData @ 0x1403B3B0C (RaspLoadGlyphData.c)
 *     RaspMapCharacterCodeToGlyphIndex @ 0x1403B3BA4 (RaspMapCharacterCodeToGlyphIndex.c)
 */

__int64 __fastcall RaspGetUnscaledGlyphData(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 v10; // si
  int v11; // eax
  _QWORD *v12; // r15
  int GlyphData; // eax
  __int64 v14; // r8
  _DWORD *v15; // r9
  int Bearings; // edi
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+90h] [rbp+50h] BYREF

  v19 = 0;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = 0LL;
  v20 = 0;
  v18 = 0LL;
  v10 = 0;
  if ( (int)RaspMapCharacterCodeToGlyphIndex(v7, a2, &v19) >= 0 )
    v10 = v19;
  v11 = RaspMapGlyphIndexToLocation(a1, v10, &v20);
  v12 = a5;
  if ( v11 >= 0 || (v10 = 0, Bearings = RaspMapGlyphIndexToLocation(a1, 0LL, &v20), Bearings >= 0) )
  {
    v19 = v10;
    GlyphData = RaspLoadGlyphData(a1, v20, (unsigned int)&v19, (unsigned int)&v18, (__int64)v12);
    v8 = v18;
    Bearings = GlyphData;
    if ( GlyphData >= 0 )
    {
      Bearings = RaspConvertDeltas(v18);
      if ( Bearings >= 0 )
        Bearings = RaspLoadBearings(a1, v19, v8, a4);
    }
  }
  if ( a3 )
  {
    *a3 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    RaspFreeMemory(v8, v12, v14, v15);
  return (unsigned int)Bearings;
}
