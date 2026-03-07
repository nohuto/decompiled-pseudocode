_QWORD *__fastcall sub_1400B50B0(_QWORD *P, char a2)
{
  sub_140091C7C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
