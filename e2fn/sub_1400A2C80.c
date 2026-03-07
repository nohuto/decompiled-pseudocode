_QWORD *__fastcall sub_1400A2C80(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &off_1400D4588;
  sub_1400A2980(P + 10);
  v4 = (void *)P[7];
  P[5] = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  P[7] = 0LL;
  P[8] = 0LL;
  P[9] = 0LL;
  *P = &off_1400D4500;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
