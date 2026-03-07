__int64 __fastcall DirectComposition::CEffectGroupMarshaler::SetReferenceProperty(
        DirectComposition::CEffectGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 10,
             (__int64)a4,
             1,
             187,
             (int *)this + 4,
             512,
             0,
             a5);
  else
    return 3221225485LL;
}
