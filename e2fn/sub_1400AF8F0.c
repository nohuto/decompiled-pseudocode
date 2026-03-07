_QWORD *__fastcall sub_1400AF8F0(_QWORD *P, char a2)
{
  sub_140071138(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
