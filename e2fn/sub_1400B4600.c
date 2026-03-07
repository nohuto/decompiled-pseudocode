_QWORD *__fastcall sub_1400B4600(_QWORD *P, char a2)
{
  sub_14008E284(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
