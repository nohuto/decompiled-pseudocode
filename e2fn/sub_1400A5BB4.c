char *__fastcall sub_1400A5BB4(_QWORD *P, char a2)
{
  char *v4; // r14
  __int64 v5; // rbp
  volatile signed __int32 **v6; // rsi
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v9; // rbx

  if ( (a2 & 2) != 0 )
  {
    v4 = (char *)(P - 1);
    v5 = *(P - 1);
    if ( v5 )
    {
      v6 = (volatile signed __int32 **)&P[2 * *(P - 1) + 1];
      do
      {
        v6 -= 2;
        --v5;
        v7 = *v6;
        if ( *v6 )
        {
          if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
            if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
          }
        }
      }
      while ( v5 );
    }
    if ( (a2 & 1) != 0 )
    {
      if ( v4 )
        ExFreePool(v4);
    }
    return v4;
  }
  else
  {
    v9 = (volatile signed __int32 *)P[1];
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    if ( (a2 & 1) != 0 )
      ExFreePool(P);
    return (char *)P;
  }
}
