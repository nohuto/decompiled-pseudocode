_QWORD *__fastcall sub_1400B5620(_QWORD *P, char a2)
{
  sub_140093C18(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
