_QWORD *__fastcall sub_1400A6840(_QWORD *P, char a2)
{
  sub_14000DDDC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
