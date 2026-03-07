_QWORD *__fastcall sub_1400B1FF0(_QWORD *P, char a2)
{
  sub_140080994(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
