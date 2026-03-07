char *__fastcall sub_1400A639C(_QWORD *P, char a2)
{
  char *v4; // rsi
  __int64 v5; // rbp
  char *v6; // rdi
  void *v7; // rcx
  void *v9; // rcx

  if ( (a2 & 2) != 0 )
  {
    v4 = (char *)(P - 1);
    v5 = *(P - 1);
    if ( v5 )
    {
      v6 = (char *)&P[7 * v5 + 4];
      do
      {
        v6 -= 56;
        --v5;
        v7 = *(void **)v6;
        *((_QWORD *)v6 - 2) = &off_1400D41D0;
        if ( v7 )
          ExFreePool(v7);
        *(_QWORD *)v6 = 0LL;
        *((_QWORD *)v6 + 1) = 0LL;
        *((_QWORD *)v6 + 2) = 0LL;
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
    P[2] = &off_1400D41D0;
    v9 = (void *)P[4];
    if ( v9 )
      ExFreePool(v9);
    P[4] = 0LL;
    P[5] = 0LL;
    P[6] = 0LL;
    if ( (a2 & 1) != 0 && P )
      ExFreePool(P);
    return (char *)P;
  }
}
