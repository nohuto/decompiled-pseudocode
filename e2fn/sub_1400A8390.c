_QWORD *__fastcall sub_1400A8390(_QWORD *P, char a2)
{
  sub_14002118C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
