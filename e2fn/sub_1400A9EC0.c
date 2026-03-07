_QWORD *__fastcall sub_1400A9EC0(_QWORD *P, char a2)
{
  sub_1400328FC(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
