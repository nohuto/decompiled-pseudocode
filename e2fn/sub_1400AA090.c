_QWORD *__fastcall sub_1400AA090(_QWORD *P, char a2)
{
  sub_140039138(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
