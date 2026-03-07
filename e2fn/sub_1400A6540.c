_QWORD *__fastcall sub_1400A6540(_QWORD *P, char a2)
{
  *P = &off_1400D4DA0;
  sub_14000D1A0(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
