__int64 __fastcall PFFOBJ::QueryFontData(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  __int64 (__fastcall *v11)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[16]; // [rsp+40h] [rbp-28h] BYREF

  v11 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 88LL) + 2888LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v15, this);
  if ( (unsigned int)Feature_2942477631__private_IsEnabledDeviceUsage(v12) )
  {
    v13 = v11(a2, a3, a4, a5, a6, a7, a8);
    if ( !ValidateGlyphDataAndBitmap(v13, a3, a4, a6, a7) )
      v13 = -1;
  }
  else
  {
    v13 = v11(a2, a3, a4, a5, a6, a7, a8);
  }
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v15);
  return v13;
}
