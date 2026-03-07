_QWORD *__fastcall sub_1400AA560(_QWORD *P, char a2)
{
  sub_1400455A0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
