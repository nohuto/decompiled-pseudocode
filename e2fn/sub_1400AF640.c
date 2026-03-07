_QWORD *__fastcall sub_1400AF640(_QWORD *P, char a2)
{
  void *v4; // rcx

  P[3] = &off_1400D41D0;
  v4 = (void *)P[5];
  if ( v4 )
    ExFreePool(v4);
  P[5] = 0LL;
  P[6] = 0LL;
  P[7] = 0LL;
  *P = &off_1400D44E8;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
