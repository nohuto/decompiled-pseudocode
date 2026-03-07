_QWORD *__fastcall sub_1400B5680(_QWORD *P, char a2)
{
  sub_140095560(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
