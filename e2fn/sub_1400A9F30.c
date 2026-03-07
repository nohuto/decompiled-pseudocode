_QWORD *__fastcall sub_1400A9F30(_QWORD *P, char a2)
{
  sub_140034A70(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
