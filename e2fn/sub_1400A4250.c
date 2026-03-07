_QWORD *__fastcall sub_1400A4250(_QWORD *P, char a2)
{
  *P = &off_1400D4850;
  P[52] = &off_1400D48A8;
  sub_1400A2980(P + 54);
  P[52] = &off_1400D47C0;
  sub_140005C04(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
