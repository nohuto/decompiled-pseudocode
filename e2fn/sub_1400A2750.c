_QWORD *__fastcall sub_1400A2750(_QWORD *P, char a2)
{
  sub_1400022A8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
