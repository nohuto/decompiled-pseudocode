_QWORD *__fastcall sub_1400A6580(_QWORD *P, char a2)
{
  sub_14000D1A0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
