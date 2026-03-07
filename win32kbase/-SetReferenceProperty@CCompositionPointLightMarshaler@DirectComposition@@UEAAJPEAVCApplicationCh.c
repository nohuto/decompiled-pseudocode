__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 7 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 16,
             (__int64)a4,
             1,
             196,
             (int *)this + 4,
             4096,
             0,
             a5);
  else
    return 3221225485LL;
}
