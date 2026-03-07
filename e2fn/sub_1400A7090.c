_QWORD *__fastcall sub_1400A7090(_QWORD *P, char a2)
{
  *P = &off_1400D5610;
  P[1] = off_1400D5638;
  sub_140005CFC(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
