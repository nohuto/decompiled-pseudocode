void __fastcall vStrMirror01(unsigned int **a1)
{
  struct SURFACE *v1; // rbp
  unsigned int *v2; // r13
  int v3; // edx
  int v4; // r8d
  int v5; // ebx
  unsigned int v6; // r15d
  int v7; // edi
  int v8; // r12d
  int v9; // ebx
  unsigned int *v10; // r14
  int *v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  int v19; // edx
  unsigned int v20; // r11d
  int v21; // r10d
  int v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned int *v24; // [rsp+10h] [rbp-58h]
  int v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v1 = (struct SURFACE *)a1;
  v2 = a1[10];
  v24 = v2;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 14) / 2;
  v22 = v4;
  v27 = 0;
  if ( *((int *)a1 + 15) > 0 )
  {
    do
    {
      v5 = *((_DWORD *)v1 + 14) - 1;
      v6 = *v2;
      v7 = v5 >> 5;
      v8 = 0;
      v9 = v5 & 0x1F;
      v26 = 0;
      v10 = v2;
      v11 = (int *)&v2[v7];
      v12 = *v11;
      v25 = *v11;
      if ( v4 > 0 )
      {
        v13 = 0LL;
        v23 = (unsigned int)v4;
        v14 = (unsigned int)v9;
        do
        {
          if ( v8 == v7 )
          {
            v15 = dword_1C0319320[v13];
            v16 = dword_1C032AE80[v13];
            v17 = v6 & ~v15 | ((v6 & dword_1C0319320[v14]) >> dword_1C032AE80[v14] << v16);
            v18 = (v6 & v15) >> v16;
            v12 = v25;
            v6 = (v18 << dword_1C032AE80[v14]) | ~dword_1C0319320[v14] & v17;
          }
          else
          {
            v19 = dword_1C032AE80[v13];
            v20 = v6 & dword_1C0319320[v13];
            v21 = dword_1C0319320[v14];
            v6 = v6 & ~dword_1C0319320[v13] | ((v25 & (unsigned int)v21) >> dword_1C032AE80[v14] << v19);
            v12 = (v20 >> v19 << dword_1C032AE80[v14]) | v25 & ~v21;
            v25 = v12;
          }
          ++v13;
          --v9;
          --v14;
          if ( (++v26 & 0x20) != 0 )
          {
            *v10 = v6;
            ++v8;
            ++v10;
            if ( v8 == v7 )
              *v11 = v12;
            v6 = *v10;
            v26 = 0;
            v13 = 0LL;
          }
          if ( v9 < 0 )
          {
            *v11 = v12;
            --v7;
            --v11;
            if ( v7 == v8 )
            {
              *v10 = v6;
            }
            else
            {
              v12 = *v11;
              v25 = *v11;
            }
            v9 = 31;
            v14 = 31LL;
          }
          --v23;
        }
        while ( v23 );
        v1 = (struct SURFACE *)a1;
        v2 = v24;
        v3 = v27;
        v4 = v22;
      }
      *v10 = v6;
      if ( v8 != v7 )
        *v11 = v12;
      ++v3;
      v2 = (unsigned int *)((char *)v2 + *((int *)v1 + 22));
      v27 = v3;
      v24 = v2;
    }
    while ( v3 < *((_DWORD *)v1 + 15) );
  }
}
