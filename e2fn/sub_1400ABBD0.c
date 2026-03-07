PVOID __fastcall sub_1400ABBD0(PVOID P, char a2)
{
  sub_140055708((__int64)P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
