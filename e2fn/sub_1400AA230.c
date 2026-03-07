_QWORD *__fastcall sub_1400AA230(_QWORD *P, char a2)
{
  sub_14003AAFC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
