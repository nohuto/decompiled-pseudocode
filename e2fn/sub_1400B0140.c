_QWORD *__fastcall sub_1400B0140(_QWORD *P, char a2)
{
  sub_140074120(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
