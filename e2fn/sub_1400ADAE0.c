_QWORD *__fastcall sub_1400ADAE0(_QWORD *P, char a2)
{
  sub_1400617E8(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
