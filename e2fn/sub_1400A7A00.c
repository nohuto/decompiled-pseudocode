_QWORD *__fastcall sub_1400A7A00(_QWORD *P, char a2)
{
  sub_1400209F0(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
