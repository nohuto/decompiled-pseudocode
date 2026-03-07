int __fastcall DirectComposition::CSpriteShapeMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  char *v7; // rdx
  char *v8; // rcx
  int v9; // [rsp+30h] [rbp-28h]
  bool *v10; // [rsp+40h] [rbp-18h]

  switch ( a3 )
  {
    case 1u:
      v7 = (char *)this + 72;
      v10 = a5;
      v8 = (char *)this + 16;
      v9 = 64;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v7, a4, 1LL, 17, v8, v9, 0, v10);
    case 2u:
      v7 = (char *)this + 80;
      v10 = a5;
      v8 = (char *)this + 16;
      v9 = 256;
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(a2, v7, a4, 1LL, 17, v8, v9, 0, v10);
    case 3u:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (char *)this + 64,
               a4,
               1LL,
               67,
               (char *)this + 16,
               128,
               0,
               a5);
    default:
      return DirectComposition::CShapeMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
}
