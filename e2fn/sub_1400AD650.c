_QWORD *__fastcall sub_1400AD650(_QWORD *P, char a2)
{
  *P = &off_1400D7DD8;
  P[7] = off_1400D7E08;
  P[25] = off_1400D7E38;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
