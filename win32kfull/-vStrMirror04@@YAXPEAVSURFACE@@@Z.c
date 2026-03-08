/*
 * XREFs of ?vStrMirror04@@YAXPEAVSURFACE@@@Z @ 0x1C02E4D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStrMirror04(struct SURFACE *a1)
{
  unsigned int *v1; // r8
  struct SURFACE *v2; // rsi
  int v3; // ecx
  int v4; // edx
  int v5; // r9d
  unsigned int v6; // r12d
  int v7; // ebx
  __int64 v8; // r10
  int v9; // ebp
  int v10; // edi
  unsigned int *v11; // r15
  int *v12; // r14
  int v13; // r13d
  __int64 v14; // rsi
  int v15; // r9d
  unsigned int v16; // r11d
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-60h]
  unsigned int *v19; // [rsp+10h] [rbp-58h]
  int v21; // [rsp+78h] [rbp+10h]
  int i; // [rsp+80h] [rbp+18h]
  int v23; // [rsp+88h] [rbp+20h]

  v1 = (unsigned int *)*((_QWORD *)a1 + 10);
  v2 = a1;
  v3 = *((_DWORD *)a1 + 14);
  v19 = v1;
  v4 = 0;
  v5 = v3 / 2;
  v23 = v3 / 2;
  for ( i = 0; v4 < *((_DWORD *)v2 + 15); v19 = v1 )
  {
    v6 = *v1;
    v7 = (v3 - 1) >> 3;
    v8 = 0LL;
    v21 = 0;
    v9 = 0;
    v10 = (v3 - 1) & 7;
    v17 = 0LL;
    v11 = v1;
    v12 = (int *)&v1[v7];
    v13 = *v12;
    if ( v5 > 0 )
    {
      v18 = (unsigned int)v5;
      v14 = (unsigned int)v10;
      do
      {
        if ( v9 == v7 )
        {
          v6 = ((v6 & dword_1C031B088[v8]) >> dword_1C031B068[v8] << dword_1C031B068[v14]) | ~dword_1C031B088[v14] & (v6 & ~dword_1C031B088[v8] | ((v6 & dword_1C031B088[v14]) >> dword_1C031B068[v14] << dword_1C031B068[v8]));
        }
        else
        {
          v15 = dword_1C031B088[v8];
          v16 = (v6 & v15) >> dword_1C031B068[v8];
          v6 = v6 & ~v15 | ((v13 & (unsigned int)dword_1C031B088[v14]) >> dword_1C031B068[v14] << dword_1C031B068[v8]);
          v13 = (v16 << dword_1C031B068[v14]) | ~dword_1C031B088[v14] & v13;
        }
        --v10;
        v8 = v17 + 1;
        ++v21;
        --v14;
        ++v17;
        if ( (v21 & 8) != 0 )
        {
          *v11 = v6;
          ++v9;
          ++v11;
          if ( v9 == v7 )
            *v12 = v13;
          v6 = *v11;
          v8 = 0LL;
          v21 = 0;
          v17 = 0LL;
        }
        if ( v10 < 0 )
        {
          *v12 = v13;
          --v7;
          --v12;
          if ( v7 != v9 )
            v13 = *v12;
          v10 = 7;
          v14 = 7LL;
        }
        *v11 = v6;
        if ( v9 != v7 )
          *v12 = v13;
        --v18;
      }
      while ( v18 );
      v2 = a1;
      v1 = v19;
      v4 = i;
      v5 = v23;
      v3 = *((_DWORD *)a1 + 14);
    }
    ++v4;
    v1 = (unsigned int *)((char *)v1 + *((int *)v2 + 22));
    i = v4;
  }
}
