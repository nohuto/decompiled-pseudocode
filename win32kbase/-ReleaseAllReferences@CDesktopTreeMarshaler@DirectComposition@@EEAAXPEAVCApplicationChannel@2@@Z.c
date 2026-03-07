void __fastcall DirectComposition::CDesktopTreeMarshaler::ReleaseAllReferences(
        DirectComposition::CDesktopTreeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CDesktopTreeMarshaler::ReleaseRootVisual(this, a2);
}
