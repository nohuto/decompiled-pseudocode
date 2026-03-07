_QWORD *__fastcall sub_1400AA170(_QWORD *P, char a2)
{
  sub_140039E24(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
