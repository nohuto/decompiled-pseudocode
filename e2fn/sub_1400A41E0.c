_QWORD *__fastcall sub_1400A41E0(_QWORD *P, char a2)
{
  sub_140005C04(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
