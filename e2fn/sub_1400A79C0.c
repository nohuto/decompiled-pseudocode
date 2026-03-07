_QWORD *__fastcall sub_1400A79C0(_QWORD *P, char a2)
{
  sub_140020958(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
