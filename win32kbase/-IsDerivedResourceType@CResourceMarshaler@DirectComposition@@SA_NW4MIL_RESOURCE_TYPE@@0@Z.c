char __fastcall DirectComposition::CResourceMarshaler::IsDerivedResourceType(unsigned int a1, int a2)
{
  while ( a1 < 0xCE )
  {
    if ( a1 == a2 )
      return 1;
    a1 = dword_1C02934F0[a1];
  }
  return 0;
}
