_QWORD *__fastcall sub_1400A9E80(_QWORD *P, char a2)
{
  sub_1400327B0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
