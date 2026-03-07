_QWORD *__fastcall sub_1400B0240(_QWORD *P, char a2)
{
  *P = &off_1400D9310;
  while ( P[7] )
    sub_1400A4398(P + 3, (_QWORD *)P[4]);
  P[3] = 0LL;
  P[4] = 0LL;
  *P = &off_1400D92C8;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
