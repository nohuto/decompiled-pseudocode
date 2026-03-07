_QWORD *__fastcall sub_1400A4170(_QWORD *P, char a2)
{
  sub_1400059D8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
