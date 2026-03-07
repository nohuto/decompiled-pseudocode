_QWORD *__fastcall sub_1400A40A0(_QWORD *P, char a2)
{
  *P = &off_1400D46F8;
  P[1] = off_1400D4720;
  sub_140005CFC(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
