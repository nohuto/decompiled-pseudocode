_QWORD *__fastcall sub_1400A8A30(_QWORD *P, char a2)
{
  *P = &off_1400D5ED8;
  P[7] = off_1400D5F08;
  P[25] = off_1400D5F38;
  P[44] = off_1400D5F80;
  sub_1400A2980(P + 55);
  sub_140021844(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
