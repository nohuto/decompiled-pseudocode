_QWORD *__fastcall sub_1400AE750(_QWORD *P, char a2)
{
  *P = &off_1400D8908;
  P[7] = off_1400D8930;
  P[25] = off_1400D8960;
  P[45] = &off_1400D5BA0;
  P[44] = &off_1400D46A0;
  sub_14007134C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
