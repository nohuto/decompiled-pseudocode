_QWORD *__fastcall sub_1400AE370(_QWORD *P, char a2)
{
  sub_140066504(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
