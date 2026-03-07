_QWORD *__fastcall sub_1400A6480(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = off_1400D4D58;
  v4 = (void *)P[1];
  if ( v4 )
  {
    ExFreePool(v4);
    P[1] = 0LL;
  }
  P[2] = 0LL;
  P[3] = 0LL;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
