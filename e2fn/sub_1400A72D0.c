_QWORD *__fastcall sub_1400A72D0(_QWORD *P, char a2)
{
  sub_140017FD4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
