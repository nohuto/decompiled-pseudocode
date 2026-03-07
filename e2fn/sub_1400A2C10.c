_QWORD *__fastcall sub_1400A2C10(_QWORD *P, char a2)
{
  sub_1400029C0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
