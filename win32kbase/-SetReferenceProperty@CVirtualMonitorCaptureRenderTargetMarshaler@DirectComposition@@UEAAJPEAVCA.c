__int64 __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::SetReferenceProperty(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 8 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 17,
             (__int64)a4,
             1,
             53,
             (int *)this + 4,
             0x2000,
             0,
             a5);
  else
    return DirectComposition::CCaptureRenderTargetMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
