_QWORD *__fastcall sub_1400AA1D0(_QWORD *P, char a2)
{
  sub_14003A8C4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
