_QWORD *__fastcall sub_1400A42C0(_QWORD *P, char a2)
{
  sub_1400A3EB4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
