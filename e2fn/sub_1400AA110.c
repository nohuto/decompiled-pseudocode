_QWORD *__fastcall sub_1400AA110(_QWORD *P, char a2)
{
  *P = &off_1400D6F20;
  P[7] = off_1400D6F48;
  P[25] = off_1400D6F78;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
