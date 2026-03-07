void __fastcall DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CInteractionTrackerBindingManagerMarshaler *a3)
{
  if ( this[57] != a3 )
  {
    if ( a3 )
      DirectComposition::CResourceMarshaler::AddRef(a3);
    DirectComposition::CApplicationChannel::ReleaseResource(a2, this[57]);
    this[57] = a3;
  }
}
