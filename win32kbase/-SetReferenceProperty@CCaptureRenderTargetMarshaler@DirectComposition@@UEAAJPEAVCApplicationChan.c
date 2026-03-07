__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetReferenceProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 )
    return 3221225485LL;
  else
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 15,
             (__int64)a4,
             1,
             19,
             (int *)this + 4,
             32,
             0,
             a5);
}
