_QWORD *__fastcall sub_1400B31B0(_QWORD *P, char a2)
{
  sub_14008B450(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
