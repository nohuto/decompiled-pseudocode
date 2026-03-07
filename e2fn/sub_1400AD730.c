_QWORD *__fastcall sub_1400AD730(_QWORD *P, char a2)
{
  sub_14005E934(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
