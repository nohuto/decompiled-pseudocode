_QWORD *__fastcall sub_1400A4360(_QWORD *P, char a2)
{
  sub_140005CFC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
