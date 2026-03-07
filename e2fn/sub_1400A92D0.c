_QWORD *__fastcall sub_1400A92D0(_QWORD *P, char a2)
{
  sub_1400293B0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
