_QWORD *__fastcall sub_1400B3D30(_QWORD *P, char a2)
{
  sub_14008C6D4(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePool(P);
  return P;
}
