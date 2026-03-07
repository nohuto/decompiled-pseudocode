_QWORD *__fastcall sub_1400B4AF0(_QWORD *P, char a2)
{
  sub_14008F554(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
