_QWORD *__fastcall sub_1400B11A0(_QWORD *P, char a2)
{
  sub_1400B0FE8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
