_QWORD *__fastcall sub_1400B02C0(_QWORD *P, char a2)
{
  sub_14007450C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
