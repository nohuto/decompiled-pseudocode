_QWORD *__fastcall sub_1400AF930(_QWORD *P, char a2)
{
  sub_14007134C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
