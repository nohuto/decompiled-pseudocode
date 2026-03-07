_QWORD *__fastcall sub_1400AA020(_QWORD *P, char a2)
{
  *P = &off_1400D6DA8;
  P[7] = off_1400D6DD8;
  P[25] = off_1400D6E08;
  P[44] = &off_1400D5BA0;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
