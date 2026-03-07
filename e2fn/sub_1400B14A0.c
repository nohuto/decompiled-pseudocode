_QWORD *__fastcall sub_1400B14A0(_QWORD *P, char a2)
{
  sub_1400B13F8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
