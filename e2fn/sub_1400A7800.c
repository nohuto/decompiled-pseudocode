_QWORD *__fastcall sub_1400A7800(_QWORD *P, char a2)
{
  *P = &off_1400D59D0;
  P[7] = off_1400D5A10;
  P[25] = off_1400D5A40;
  P[44] = &off_1400D47C0;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
