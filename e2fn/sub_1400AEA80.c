_QWORD *__fastcall sub_1400AEA80(_QWORD *P, char a2)
{
  sub_1400696F4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
