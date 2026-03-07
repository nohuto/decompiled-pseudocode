_QWORD *__fastcall sub_1400A8B50(_QWORD *P, char a2)
{
  *P = &off_1400D6058;
  P[7] = off_1400D6080;
  P[25] = off_1400D60B0;
  P[44] = off_1400D60F8;
  sub_1400A2980(P + 55);
  sub_140021844(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
