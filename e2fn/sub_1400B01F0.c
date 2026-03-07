_QWORD *__fastcall sub_1400B01F0(_QWORD *P, char a2)
{
  *P = &off_1400D9370;
  P[7] = off_1400D9380;
  sub_140071138(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
