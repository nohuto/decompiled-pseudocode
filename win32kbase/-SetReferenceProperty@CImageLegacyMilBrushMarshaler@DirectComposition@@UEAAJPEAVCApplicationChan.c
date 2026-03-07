__int64 __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetReferenceProperty(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v7; // rdx
  int v8; // [rsp+30h] [rbp-28h]
  bool *v9; // [rsp+40h] [rbp-18h]

  *a5 = 0;
  switch ( a3 )
  {
    case 7u:
      v9 = a5;
      v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 112);
      v8 = 4096;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               v7,
               (__int64)a4,
               1,
               140,
               (int *)this + 4,
               v8,
               0,
               v9);
    case 9u:
      v9 = a5;
      v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
      v8 = 0x4000;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               v7,
               (__int64)a4,
               1,
               140,
               (int *)this + 4,
               v8,
               0,
               v9);
    case 0x11u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 22,
               (__int64)a4,
               1,
               85,
               (int *)this + 4,
               0x400000,
               0,
               a5);
    default:
      return DirectComposition::CLegacyMilBrushMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
}
