_QWORD *__fastcall sub_1400A9F90(_QWORD *P, char a2)
{
  sub_140035CB8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
