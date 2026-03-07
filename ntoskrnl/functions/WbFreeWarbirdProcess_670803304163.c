__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // esi
  unsigned int j; // ebp
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_1406AF488((__int64)P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_140752E20(P + 22);
    for ( j = 0; j < P[3]; ++j )
      sub_1406AFC38((__int64)P, *(_QWORD *)(P[2] * j + *((_QWORD *)P + 3)));
    sub_140752E20(P + 2);
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (char *)v6 == v5 )
        break;
      sub_1406AFC38((__int64)P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      sub_140752C94(*(_QWORD **)(P[34] * k + *((_QWORD *)P + 19)));
    sub_140752E20(P + 34);
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_140752E20(P + 46);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
