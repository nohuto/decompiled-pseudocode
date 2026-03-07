_QWORD *__fastcall sub_1400AC770(_QWORD *P, char a2)
{
  sub_14005B680(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
