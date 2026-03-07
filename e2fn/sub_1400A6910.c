PVOID __fastcall sub_1400A6910(PVOID P, char a2)
{
  sub_1400F451C();
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
