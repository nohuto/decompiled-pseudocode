PVOID __fastcall sub_1400AAFF0(PVOID P, char a2)
{
  sub_14004A4A0((__int64)P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
