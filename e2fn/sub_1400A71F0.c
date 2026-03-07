_QWORD *__fastcall sub_1400A71F0(_QWORD *P, char a2)
{
  sub_14001478C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
