PVOID __fastcall sub_1400AF590(PVOID P, char a2)
{
  sub_14006F060((__int64)P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
