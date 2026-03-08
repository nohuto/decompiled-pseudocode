/*
 * XREFs of ?vGradientFill32Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FBA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r9
  int v4; // ebp
  char *v5; // r13
  int v6; // r12d
  __int64 v7; // r15
  int v8; // edx
  int v9; // r8d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r11
  unsigned __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // r8
  _DWORD *v17; // r12
  unsigned __int64 v18; // r14
  __int64 v19; // [rsp+20h] [rbp-98h]
  __int64 v20; // [rsp+28h] [rbp-90h]
  __int64 v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  char *v23; // [rsp+40h] [rbp-78h]
  __int64 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+60h] [rbp-58h]
  int v28; // [rsp+D0h] [rbp+18h]
  int v29; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v28 = v4;
  v23 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v19 = *((_QWORD *)a2 + 2);
  v20 = *((_QWORD *)a2 + 3);
  v21 = *((_QWORD *)a2 + 4);
  v24 = *((_QWORD *)a2 + 20);
  v22 = v7;
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v29 = v6;
  if ( v4 < v6 )
  {
    v25 = *((int *)a1 + 22);
    do
    {
      v8 = *(_DWORD *)v5;
      v9 = *((_DWORD *)v5 + 1);
      v10 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)v2 )
        v8 = *(_DWORD *)v2;
      v11 = *((_QWORD *)v5 + 2);
      v12 = *((_QWORD *)v5 + 3);
      if ( v9 >= *((_DWORD *)v2 + 2) )
        v9 = *((_DWORD *)v2 + 2);
      v13 = v8;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v8 + v7) && v8 < v9 )
      {
        v14 = v7 + 4LL * v8;
        v15 = *(_DWORD *)v2 - *(_DWORD *)v5;
        v16 = v7 + 4LL * v9;
        if ( v15 > 0 )
        {
          v10 += v19 * v15;
          v11 += v20 * v15;
          v12 += v21 * v15;
        }
        if ( v14 < v16 )
        {
          v17 = (_DWORD *)(v7 + 4 * v13);
          v18 = v16;
          do
          {
            *v17 = XEPALOBJ::ulDispatchGFPEFunction(
                     v24,
                     *(unsigned int *)(*(_QWORD *)v24 + 100LL),
                     HIBYTE(v10) | ((HIBYTE(v11) | ((unsigned int)HIBYTE(v12) << 8)) << 8));
            v10 += v19;
            ++v17;
            v11 += v20;
            v12 += v21;
          }
          while ( (unsigned __int64)v17 < v18 );
          v2 = a2;
          v7 = v22;
          v4 = v28;
          v6 = v29;
          v5 = v23;
          v3 = a1;
        }
      }
      v7 += v25;
      v5 += 40;
      ++v4;
      v22 = v7;
      v23 = v5;
      v28 = v4;
    }
    while ( v4 < v6 );
  }
}
