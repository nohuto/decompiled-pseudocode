void __fastcall DirectComposition::CVisualTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  bool v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 8) )
    DirectComposition::CVisualTargetMarshaler::UpdateRootVisual(this, a2, 0LL, &v4);
  DirectComposition::CSharedResourceMarshaler<DirectComposition::CResourceMarshaler,1>::ReleaseAllReferences(this, a2);
}
