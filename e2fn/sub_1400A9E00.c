_QWORD *__fastcall sub_1400A9E00(_QWORD *P, char a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // r8

  v2 = (void (__fastcall ***)(_QWORD, __int64))P[1];
  *P = off_1400D6A08;
  if ( v2 )
  {
    if ( *(v2 - 1) )
    {
      (**v2)(v2, 3LL);
    }
    else if ( v2 != (void (__fastcall ***)(_QWORD, __int64))8 )
    {
      ExFreePool(v2 - 1);
    }
    P[1] = 0LL;
  }
  P[2] = 0LL;
  P[3] = 0LL;
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
