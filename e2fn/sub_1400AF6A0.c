_QWORD *__fastcall sub_1400AF6A0(_QWORD *P, char a2)
{
  *P = &off_1400D9010;
  sub_140005C04(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
