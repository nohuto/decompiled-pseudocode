_QWORD *__fastcall sub_1400ACCB0(_QWORD *P, char a2)
{
  sub_14005C9A4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
