_QWORD *__fastcall sub_1400A2BD0(_QWORD *P, char a2)
{
  sub_14000280C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
