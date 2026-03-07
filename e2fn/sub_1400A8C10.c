_QWORD *__fastcall sub_1400A8C10(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &off_1400D6120;
  P[1] = off_1400D6148;
  P[9] = off_1400D4D58;
  v4 = (void *)P[10];
  if ( v4 )
  {
    ExFreePool(v4);
    P[10] = 0LL;
  }
  P[11] = 0LL;
  P[12] = 0LL;
  sub_140005CFC(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
