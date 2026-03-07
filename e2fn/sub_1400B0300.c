_QWORD *__fastcall sub_1400B0300(_QWORD *P, char a2)
{
  sub_1400745A4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
