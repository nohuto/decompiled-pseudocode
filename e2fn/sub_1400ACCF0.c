_QWORD *__fastcall sub_1400ACCF0(_QWORD *P, char a2)
{
  void *v4; // rcx

  *P = &off_1400D7CD0;
  P[1] = off_1400D7CF8;
  P[9] = &off_1400D41D0;
  v4 = (void *)P[11];
  if ( v4 )
    ExFreePool(v4);
  P[11] = 0LL;
  P[12] = 0LL;
  P[13] = 0LL;
  sub_140005CFC(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
