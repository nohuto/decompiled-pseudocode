_QWORD *__fastcall sub_1400AB510(_QWORD *P, char a2)
{
  sub_140050ECC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
