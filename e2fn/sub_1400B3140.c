_QWORD *__fastcall sub_1400B3140(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = off_1400D9A00;
  P[3] = &off_1400D41D0;
  v4 = (void *)P[5];
  if ( v4 )
    ExFreePool(v4);
  P[5] = 0LL;
  P[6] = 0LL;
  P[7] = 0LL;
  P[1] = &off_1400D46A0;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
