_QWORD *__fastcall sub_1400A7190(_QWORD *P, char a2)
{
  sub_140012450(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
