char __fastcall DirectComposition::CColorGradientStopMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( !a2 )
    return a3 == 18;
  if ( a2 != 1 )
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
  return a3 == 69;
}
