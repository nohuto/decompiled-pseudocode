_QWORD *__fastcall sub_1400B6820(_QWORD *P, char a2)
{
  sub_14009E55C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
