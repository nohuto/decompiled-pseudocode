int __fastcall DirectComposition::CSuperWetInkVisualMarshaler::SetReferenceProperty(
        DirectComposition::CSuperWetInkVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 )
    return DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  else
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 47,
             (__int64)a4,
             1,
             182,
             (int *)this + 96,
             2,
             0,
             a5);
}
