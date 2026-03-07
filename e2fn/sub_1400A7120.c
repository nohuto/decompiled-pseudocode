_QWORD *__fastcall sub_1400A7120(_QWORD *P, char a2)
{
  sub_140012328(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
