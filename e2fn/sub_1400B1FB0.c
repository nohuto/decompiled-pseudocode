_QWORD *__fastcall sub_1400B1FB0(_QWORD *P, char a2)
{
  sub_14008090C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
