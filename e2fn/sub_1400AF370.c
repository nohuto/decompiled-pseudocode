_QWORD *__fastcall sub_1400AF370(_QWORD *P, char a2)
{
  sub_14006DAF0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
