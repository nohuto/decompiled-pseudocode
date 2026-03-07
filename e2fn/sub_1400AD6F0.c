_QWORD *__fastcall sub_1400AD6F0(_QWORD *P, char a2)
{
  sub_14005E86C(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
