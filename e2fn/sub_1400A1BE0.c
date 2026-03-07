_QWORD *__fastcall sub_1400A1BE0(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &off_1400D41D0;
  v4 = (void *)P[2];
  if ( v4 )
    ExFreePool(v4);
  P[2] = 0LL;
  P[3] = 0LL;
  P[4] = 0LL;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
