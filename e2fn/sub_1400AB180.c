_QWORD *__fastcall sub_1400AB180(_QWORD *P, char a2)
{
  sub_14004F1DC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
