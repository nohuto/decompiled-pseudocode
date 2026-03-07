_QWORD *__fastcall sub_1400B4D60(_QWORD *P, char a2)
{
  sub_14008FAC4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
