void __fastcall DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  *((_QWORD *)this + 7) = 0LL;
}
