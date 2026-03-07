void __fastcall DirectComposition::CGradientLegacyMilBrushMarshaler::ReleaseAllReferences(
        DirectComposition::CGradientLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CMarshaledArrayBase::Clear((DirectComposition::CGradientLegacyMilBrushMarshaler *)((char *)this + 104));
  DirectComposition::CLegacyMilBrushMarshaler::ReleaseAllReferences(this, a2);
}
