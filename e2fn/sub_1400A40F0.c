_QWORD *__fastcall sub_1400A40F0(_QWORD *P, char a2)
{
  sub_140005914(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
