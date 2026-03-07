_QWORD *__fastcall sub_1400A67D0(_QWORD *P, char a2)
{
  sub_14000DD2C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
