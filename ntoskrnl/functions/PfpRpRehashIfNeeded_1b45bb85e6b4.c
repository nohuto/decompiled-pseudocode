__int64 __fastcall PfpRpRehashIfNeeded(__int64 a1, void **a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r10d
  unsigned int v7; // eax
  char *v9; // r11
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // r14
  _QWORD *v14; // rsi
  __int64 v15; // rdx
  void *v16; // rax
  char i; // cl
  __int64 v18; // [rsp+20h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v7 = 2 * (v3 >> 5);
  if ( *(_DWORD *)a1 >= v7 )
  {
    if ( !v7 )
      v7 = 64;
    if ( v7 <= (unsigned int)a3 )
    {
      v9 = (char *)*a2;
      if ( (((_DWORD)a3 - 1) & (unsigned int)a3) != 0 )
      {
        for ( i = -1; (_DWORD)a3; LODWORD(a3) = (unsigned int)a3 >> 1 )
          ++i;
        a3 = (unsigned int)(1 << i);
      }
      if ( (unsigned int)a3 > 0x4000000 )
        a3 = 0x4000000LL;
      v10 = (unsigned int)a3;
      if ( v9 > &v9[8 * a3] )
        v10 = 0LL;
      if ( v10 )
        memset64(v9, a1 | 1, v10);
      v11 = 0;
      v12 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v13 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v14 = *(_QWORD **)(v13 + 8LL * v11);
            if ( ((unsigned __int8)v14 & 1) != 0 )
              break;
            *(_QWORD *)(v13 + 8LL * v11) = *v14;
            v18 = v12 & v14[1];
            v15 = (37
                 * (BYTE6(v18)
                  + 37
                  * (BYTE5(v18)
                   + 37
                   * (BYTE4(v18)
                    + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                 + HIBYTE(v18)) & (unsigned int)(a3 - 1);
            *v14 = *(_QWORD *)&v9[8 * v15];
            *(_QWORD *)&v9[8 * v15] = v14;
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(a1 + 4) >> 5 );
      }
      v16 = *(void **)(a1 + 8);
      v3 = (32 * a3) | *(_DWORD *)(a1 + 4) & 0x1F;
      *(_QWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 4) = v3;
      *a2 = v16;
    }
  }
  LOBYTE(v4) = v3 >= 0x20;
  return v4;
}
