_QWORD *__fastcall sub_1400A9B30(_QWORD *P, char a2)
{
  sub_14002DC58(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
