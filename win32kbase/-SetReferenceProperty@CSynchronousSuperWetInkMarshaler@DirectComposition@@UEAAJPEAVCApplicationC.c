__int64 __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetReferenceProperty(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v6; // r8d
  struct DirectComposition::CResourceMarshaler **v8; // rdx
  int v9; // [rsp+30h] [rbp-28h]
  bool *v10; // [rsp+40h] [rbp-18h]

  *a5 = 0;
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             32,
             0,
             a5);
  v6 = a3 - 1;
  if ( v6 )
  {
    if ( v6 != 4 )
      return 3221225485LL;
    v10 = a5;
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 88);
    v9 = 1024;
  }
  else
  {
    v10 = a5;
    v8 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
    v9 = 64;
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a2,
           v8,
           (__int64)a4,
           1,
           170,
           (int *)this + 4,
           v9,
           0,
           v10);
}
