_QWORD *__fastcall sub_1400A70E0(_QWORD *P, char a2)
{
  sub_14001214C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
