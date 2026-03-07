_QWORD *__fastcall sub_1400AA500(_QWORD *P, char a2)
{
  sub_140044F90(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
