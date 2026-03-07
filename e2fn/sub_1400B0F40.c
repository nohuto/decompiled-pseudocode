_QWORD *__fastcall sub_1400B0F40(_QWORD *P, char a2)
{
  sub_14007693C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
