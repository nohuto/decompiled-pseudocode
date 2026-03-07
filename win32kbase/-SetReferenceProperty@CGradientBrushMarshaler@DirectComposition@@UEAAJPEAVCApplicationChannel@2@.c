__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (__int64)a4,
             1,
             29,
             (int *)this + 4,
             512,
             0,
             a5);
  else
    return 3221225485LL;
}
