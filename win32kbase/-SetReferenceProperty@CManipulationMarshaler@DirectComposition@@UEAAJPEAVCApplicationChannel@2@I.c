__int64 __fastcall DirectComposition::CManipulationMarshaler::SetReferenceProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 8 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 35,
             (__int64)a4,
             1,
             89,
             (int *)this + 4,
             256,
             0,
             a5);
  else
    return 3221225485LL;
}
