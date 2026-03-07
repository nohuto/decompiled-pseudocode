_QWORD *__fastcall sub_1400A8AA0(_QWORD *P, char a2)
{
  sub_140021844(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
