_QWORD *__fastcall sub_1400B6880(_QWORD *P, char a2)
{
  sub_14009EF34(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
