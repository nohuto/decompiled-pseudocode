void __fastcall DirectComposition::CTransform3DGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CTransform3DGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTransform3DGroupMarshaler *)((char *)this + 72),
    a2);
}
