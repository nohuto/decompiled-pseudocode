_QWORD *__fastcall sub_1400A4300(_QWORD *P, char a2)
{
  *P = &off_1400D48D0;
  P[7] = off_1400D4900;
  P[25] = off_1400D4930;
  sub_1400741D0(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
