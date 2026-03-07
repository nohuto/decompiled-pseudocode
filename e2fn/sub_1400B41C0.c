_QWORD *__fastcall sub_1400B41C0(_QWORD *P, char a2)
{
  sub_14008DF88(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
