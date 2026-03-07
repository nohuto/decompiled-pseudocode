char __fastcall DirectComposition::CLinearTransferEffectMarshaler::IsPropertyAnimatable(
        DirectComposition::CResourceMarshaler *a1,
        unsigned int a2,
        int a3)
{
  if ( a2 < 2 || a2 == 3 || a2 == 4 || a2 == 6 || a2 == 7 || a2 - 9 < 2 )
    return a3 == 18;
  else
    return DirectComposition::CResourceMarshaler::IsPropertyAnimatable(a1, a2);
}
