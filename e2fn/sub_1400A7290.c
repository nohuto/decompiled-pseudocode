_QWORD *__fastcall sub_1400A7290(_QWORD *P, char a2)
{
  sub_140017EAC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
