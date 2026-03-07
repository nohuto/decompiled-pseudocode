_QWORD *__fastcall sub_1400B0BC0(_QWORD *P, char a2)
{
  sub_1400752B0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
