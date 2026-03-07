__int64 __fastcall DirectComposition::CCompositionSpotLightMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 14,
             (__int64)a4,
             1,
             196,
             (int *)this + 4,
             2048,
             0,
             a5);
  else
    return 3221225485LL;
}
