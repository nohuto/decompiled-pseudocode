/*
 * XREFs of ?vGradientFill24Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FB560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill24Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  int v3; // ebp
  char *v4; // r13
  int v5; // r12d
  __int64 v6; // r10
  __int64 v7; // r11
  __int64 v8; // r15
  int v9; // edx
  int v10; // r8d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  int v14; // ecx
  _BYTE *v15; // rdx
  unsigned __int64 v16; // r8
  _BYTE *v17; // r12
  unsigned __int64 v18; // r14
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-88h]
  __int64 v21; // [rsp+28h] [rbp-80h]
  __int64 v22; // [rsp+30h] [rbp-78h]
  char *v23; // [rsp+38h] [rbp-70h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  int v26; // [rsp+B0h] [rbp+8h]
  int v28; // [rsp+C0h] [rbp+18h]
  __int64 v29; // [rsp+C8h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 28);
  v4 = (char *)a2 + 168;
  v5 = *((_DWORD *)a2 + 3);
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 3);
  v26 = v3;
  v23 = (char *)a2 + 168;
  v20 = v6;
  v21 = v7;
  v8 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v29 = *((_QWORD *)a2 + 4);
  v24 = *((_QWORD *)a2 + 20);
  v22 = v8;
  if ( v5 >= *((_DWORD *)a2 + 29) )
    v5 = *((_DWORD *)a2 + 29);
  v28 = v5;
  if ( v3 < v5 )
  {
    v25 = *((int *)a1 + 22);
    do
    {
      v9 = *(_DWORD *)v4;
      v10 = *((_DWORD *)v4 + 1);
      if ( *(_DWORD *)v4 <= *(_DWORD *)v2 )
        v9 = *(_DWORD *)v2;
      v11 = *((_QWORD *)v4 + 1);
      v12 = *((_QWORD *)v4 + 2);
      v13 = *((_QWORD *)v4 + 3);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      if ( v9 < v10 )
      {
        v14 = *(_DWORD *)v2 - *(_DWORD *)v4;
        v15 = (_BYTE *)(v8 + 3 * v9);
        v16 = v8 + 3 * v10;
        if ( v14 > 0 )
        {
          v11 += v6 * v14;
          v12 += v7 * v14;
          v13 += v29 * v14;
        }
        if ( (unsigned __int64)v15 < v16 )
        {
          v17 = v15;
          v18 = v16;
          do
          {
            v19 = XEPALOBJ::ulDispatchGFPEFunction(
                    v24,
                    *(unsigned int *)(*(_QWORD *)v24 + 100LL),
                    HIBYTE(v11) | ((HIBYTE(v12) | ((unsigned int)HIBYTE(v13) << 8)) << 8));
            *v17 = v19;
            v11 += v20;
            v12 += v21;
            v13 += v29;
            v17[1] = BYTE1(v19);
            v17[2] = BYTE2(v19);
            v17 += 3;
          }
          while ( (unsigned __int64)v17 < v18 );
          v2 = a2;
          v3 = v26;
          v8 = v22;
          v5 = v28;
          v4 = v23;
          v6 = v20;
          v7 = v21;
        }
      }
      v8 += v25;
      v4 += 40;
      ++v3;
      v22 = v8;
      v23 = v4;
      v26 = v3;
    }
    while ( v3 < v5 );
  }
}
