_QWORD *__fastcall sub_1400B31F0(_QWORD *P, char a2)
{
  sub_14008B4C0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
