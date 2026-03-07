_QWORD *__fastcall sub_1400A7870(_QWORD *P, char a2)
{
  sub_1400198EC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
