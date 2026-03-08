/*
 * XREFs of ?vGradientFill32RGB@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FBC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  int v4; // ebx
  char *v5; // r14
  int v6; // edi
  __int64 v7; // r11
  __int64 v8; // r12
  int v9; // esi
  int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // r9d
  _DWORD *v15; // rsi
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r8
  int v18; // r9d
  int v19; // r9d
  unsigned __int64 v20; // r8
  __int64 v21; // [rsp+0h] [rbp-58h]
  int v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+68h] [rbp+10h]
  __int64 v24; // [rsp+70h] [rbp+18h]
  __int64 v25; // [rsp+78h] [rbp+20h]

  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v23 = *((_QWORD *)a2 + 2);
  v24 = *((_QWORD *)a2 + 3);
  v25 = *((_QWORD *)a2 + 4);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v22 = v6;
  if ( v4 < v6 )
  {
    v8 = *((int *)a1 + 22);
    v21 = v8;
    do
    {
      v9 = *(_DWORD *)v5;
      v10 = *((_DWORD *)v5 + 1);
      v11 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)a2 )
        v9 = *(_DWORD *)a2;
      v12 = *((_QWORD *)v5 + 2);
      v13 = *((_QWORD *)v5 + 3);
      if ( v10 >= *((_DWORD *)a2 + 2) )
        v10 = *((_DWORD *)a2 + 2);
      if ( *((_QWORD *)a1 + 9) <= (unsigned __int64)(v7 + v9) && v9 < v10 )
      {
        v14 = *(_DWORD *)a2 - *(_DWORD *)v5;
        v15 = (_DWORD *)(v7 + 4LL * v9);
        v16 = v7 + 4LL * v10;
        if ( v14 > 0 )
        {
          v11 += v23 * v14;
          v12 += v24 * v14;
          v13 += v25 * v14;
        }
        if ( (unsigned __int64)v15 < v16 )
        {
          do
          {
            v17 = v12;
            v12 += v24;
            v18 = HIBYTE(v13) << 8;
            v13 += v25;
            v19 = HIBYTE(v17) | v18;
            v20 = HIBYTE(v11);
            v11 += v23;
            *v15++ = v20 | (v19 << 8);
          }
          while ( (unsigned __int64)v15 < v16 );
          v6 = v22;
          v8 = v21;
        }
      }
      v7 += v8;
      v5 += 40;
      ++v4;
    }
    while ( v4 < v6 );
  }
}
