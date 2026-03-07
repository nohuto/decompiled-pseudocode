_QWORD *__fastcall sub_1400ADFD0(_QWORD *P, char a2)
{
  *P = &off_1400D8598;
  P[7] = off_1400D85C0;
  P[25] = off_1400D85F0;
  P[44] = &off_1400D46A0;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
