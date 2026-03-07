_QWORD *__fastcall sub_1400B4EC0(_QWORD *P, char a2)
{
  sub_140090168(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
