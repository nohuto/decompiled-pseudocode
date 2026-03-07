_QWORD *__fastcall sub_1400A9CE0(_QWORD *P, char a2)
{
  sub_14002FF7C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
