_QWORD *__fastcall sub_1400ADEF0(_QWORD *P, char a2)
{
  sub_1400634A4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
