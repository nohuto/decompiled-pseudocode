_QWORD *__fastcall sub_1400A9BE0(_QWORD *P, char a2)
{
  *P = &off_1400D6808;
  P[7] = off_1400D6830;
  P[25] = off_1400D6860;
  sub_14002FF7C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
