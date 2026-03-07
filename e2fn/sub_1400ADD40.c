_QWORD *__fastcall sub_1400ADD40(_QWORD *P, char a2)
{
  sub_140061CCC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
