_QWORD *__fastcall sub_1400ADB90(_QWORD *P, char a2)
{
  *P = &off_1400D8170;
  P[7] = off_1400D8198;
  P[25] = off_1400D81C8;
  P[66] = &off_1400D7428;
  sub_1400617E8(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
