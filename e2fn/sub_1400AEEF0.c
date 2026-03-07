_QWORD *__fastcall sub_1400AEEF0(_QWORD *P, char a2)
{
  sub_14006C5B4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
