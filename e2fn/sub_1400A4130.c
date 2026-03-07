_QWORD *__fastcall sub_1400A4130(_QWORD *P, char a2)
{
  *P = &off_1400D4748;
  sub_14000579C(P);
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
