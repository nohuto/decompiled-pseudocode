_QWORD *__fastcall sub_1400A3FE0(_QWORD *P, char a2)
{
  sub_140005654(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
