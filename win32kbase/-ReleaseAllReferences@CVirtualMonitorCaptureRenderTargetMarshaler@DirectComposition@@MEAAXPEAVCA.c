void __fastcall DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVirtualMonitorCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  DirectComposition::CCaptureRenderTargetMarshaler::ReleaseAllReferences(this, a2);
}
