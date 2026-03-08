/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FAA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r9
  int v4; // ebp
  char *v5; // r13
  int v6; // r12d
  __int64 v7; // r15
  int v8; // eax
  int v9; // edx
  int v10; // r10d
  int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rdx
  _WORD *v18; // r12
  int v19; // ebp
  unsigned __int64 v20; // r14
  int v21; // ecx
  __int16 v22; // ax
  int v23; // [rsp+20h] [rbp-A8h]
  int v24; // [rsp+24h] [rbp-A4h]
  __int64 v25; // [rsp+28h] [rbp-A0h]
  __int64 v26; // [rsp+30h] [rbp-98h]
  __int64 v27; // [rsp+38h] [rbp-90h]
  __int64 v28; // [rsp+40h] [rbp-88h]
  char *v29; // [rsp+48h] [rbp-80h]
  __int64 v30; // [rsp+60h] [rbp-68h]
  __int64 v31; // [rsp+68h] [rbp-60h]
  __int64 v32; // [rsp+70h] [rbp-58h]
  int v35; // [rsp+E0h] [rbp+18h]
  int v36; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v35 = v4;
  v29 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v31 = *((_QWORD *)a2 + 20);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_QWORD *)a2 + 3);
  v27 = *((_QWORD *)a2 + 4);
  v28 = v7;
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v23 = *((_DWORD *)a2 + 32);
  v24 = v6;
  if ( v4 < v6 )
  {
    v8 = v4 + *((_DWORD *)a2 + 33);
    v32 = *((int *)a1 + 22);
    v36 = v8;
    do
    {
      v9 = *((_DWORD *)v5 + 1);
      v10 = *(_DWORD *)v5;
      v11 = *(_DWORD *)v5;
      v12 = *((_QWORD *)v5 + 1);
      v13 = *((_QWORD *)v5 + 2);
      v14 = *((_QWORD *)v5 + 3);
      v15 = *(_DWORD *)v2;
      v30 = 0x1C0000000LL + 16LL * (v8 & 3) + 3323776;
      if ( v9 >= *((_DWORD *)v2 + 2) )
        v9 = *((_DWORD *)v2 + 2);
      if ( v10 <= v15 )
        v11 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v11 + v7) && v11 < v9 )
      {
        v16 = v15 - v10;
        v17 = v7 + 2LL * v9;
        if ( v16 > 0 )
        {
          v12 += v25 * v16;
          v13 += v26 * v16;
          v14 += v27 * v16;
        }
        if ( v7 + 2LL * v11 < v17 )
        {
          v18 = (_WORD *)(v7 + 2LL * v11);
          v19 = v11 + v23;
          v20 = v17;
          do
          {
            v21 = *(_DWORD *)(v30 + 4LL * (v19 & 3));
            v22 = XEPALOBJ::ulDispatchGFPEFunction(
                    v31,
                    *(unsigned int *)(*(_QWORD *)v31 + 100LL),
                    8
                  * (byte_1C032B0C0[(unsigned __int64)(unsigned int)(v21 + (HIDWORD(v12) >> 11)) >> 16] | ((byte_1C032B0C0[(unsigned __int64)(unsigned int)(v21 + (HIDWORD(v13) >> 11)) >> 16] | (byte_1C032B0C0[(unsigned __int64)(unsigned int)(v21 + (HIDWORD(v14) >> 11)) >> 16] << 8)) << 8)));
            v14 += v27;
            v12 += v25;
            *v18 = v22;
            v13 += v26;
            ++v18;
            ++v19;
          }
          while ( (unsigned __int64)v18 < v20 );
          v2 = a2;
          v4 = v35;
          v7 = v28;
          v6 = v24;
          v5 = v29;
          v3 = a1;
        }
      }
      v7 += v32;
      LOBYTE(v8) = v36 + 1;
      v5 += 40;
      v28 = v7;
      ++v4;
      v29 = v5;
      v35 = v4;
      ++v36;
    }
    while ( v4 < v6 );
  }
}
