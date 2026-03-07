_QWORD *__fastcall sub_1400A5E00(_QWORD *P, char a2)
{
  sub_14000C1AC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
