__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int v9; // r15d
  __int64 v11; // rbx
  unsigned int GlyphMetricsPlusBits; // edi
  struct _GLYPHDATA *v14; // r9
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF

  v9 = (int)a2;
  v11 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23448LL) )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
  if ( (unsigned int)Feature_2942477631__private_IsEnabledDeviceUsage() )
  {
    GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, (_DWORD)a3, a4, a5, (__int64)a6, (__int64)a7);
    if ( a6 )
      v14 = *a6;
    else
      v14 = 0LL;
    if ( !ValidateGlyphDataAndBitmap(GlyphMetricsPlusBits, a3, 1u, v14, *a7) )
      GlyphMetricsPlusBits = -1;
  }
  else
  {
    GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(v9, (_DWORD)a3, a4, a5, (__int64)a6, (__int64)a7);
  }
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  return GlyphMetricsPlusBits;
}
