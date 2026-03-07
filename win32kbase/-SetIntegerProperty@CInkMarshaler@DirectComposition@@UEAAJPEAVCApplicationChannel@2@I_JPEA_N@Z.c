__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 4 )
    return DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(this, a4, a5);
  else
    return 3221225485LL;
}
