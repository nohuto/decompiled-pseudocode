_QWORD *__fastcall sub_1400AEE80(_QWORD *P, char a2)
{
  sub_14006BBA8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
