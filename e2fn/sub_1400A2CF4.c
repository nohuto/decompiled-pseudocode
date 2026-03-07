_QWORD *__fastcall sub_1400A2CF4(_QWORD *P, char a2)
{
  volatile signed __int32 *v4; // rbx

  *P = 0LL;
  P[1] = 0LL;
  v4 = (volatile signed __int32 *)P[3];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  if ( (a2 & 1) != 0 )
    ExFreePool(P);
  return P;
}
