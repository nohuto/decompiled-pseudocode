_QWORD *__fastcall sub_1400A64E0(_QWORD *P, char a2)
{
  _QWORD *v4; // rcx

  *P = off_1400D4D60;
  v4 = (_QWORD *)P[1];
  if ( v4 )
  {
    sub_1400A639C(v4, 3);
    P[1] = 0LL;
  }
  P[2] = 0LL;
  P[3] = 0LL;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
