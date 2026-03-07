_QWORD *__fastcall sub_1400B5440(_QWORD *P, char a2)
{
  sub_14009260C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
