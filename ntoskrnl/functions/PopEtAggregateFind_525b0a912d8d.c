__int64 __fastcall PopEtAggregateFind(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  unsigned __int8 *v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v11; // rdi

  v5 = a2;
  v6 = 314159LL;
  v7 = 4LL;
  do
  {
    v8 = *v5;
    v5 += 8;
    v6 = *(v5 - 1)
       + 37
       * (*(v5 - 2)
        + 37
        * (*(v5 - 3) + 37 * (*(v5 - 4) + 37 * (*(v5 - 5) + 37 * (*(v5 - 6) + 37 * (*(v5 - 7) + 37 * (v8 + 37 * v6)))))));
    --v7;
  }
  while ( v7 );
  v9 = *(_DWORD *)(a1 + 52);
  *a3 = v6;
  v10 = -1LL << (v9 & 0x1F);
  v11 = v10 & v6;
LABEL_4:
  if ( v7 )
    goto LABEL_7;
  if ( v9 >> 5 )
  {
    v7 = *(_QWORD *)(a1 + 56)
       + 8LL
       * ((37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v11)) & ((v9 >> 5) - 1));
LABEL_7:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v11 == (v10 & *(_QWORD *)(v7 + 8)) )
      {
        if ( !v7 )
          return 0LL;
        if ( !memcmp((const void *)(v7 + 16), a2, 0x20uLL) )
          return v7;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
