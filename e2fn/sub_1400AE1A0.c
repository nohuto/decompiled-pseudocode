_QWORD *__fastcall sub_1400AE1A0(_QWORD *P, char a2)
{
  sub_14006516C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
