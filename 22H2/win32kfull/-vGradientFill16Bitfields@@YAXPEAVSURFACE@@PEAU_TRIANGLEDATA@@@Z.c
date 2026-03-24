/*
 * XREFs of ?vGradientFill16Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D1B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r10
  __int64 v4; // rdx
  int v5; // r15d
  int v6; // r13d
  __int64 v7; // r12
  char *v8; // rcx
  int v9; // eax
  int v10; // ebp
  int v11; // edx
  int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r8d
  unsigned __int64 v17; // r11
  int v18; // edx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rbp
  _WORD *v21; // r13
  int v22; // r14d
  int v23; // ecx
  __int16 v24; // ax
  int v25; // [rsp+20h] [rbp-A8h]
  int v26; // [rsp+24h] [rbp-A4h]
  char *v27; // [rsp+28h] [rbp-A0h]
  __int64 v28; // [rsp+30h] [rbp-98h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  unsigned __int64 v31; // [rsp+48h] [rbp-80h]
  __int64 v32; // [rsp+50h] [rbp-78h]
  __int64 v33; // [rsp+60h] [rbp-68h]
  __int64 v34; // [rsp+68h] [rbp-60h]
  __int64 v35; // [rsp+70h] [rbp-58h]
  int v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((int *)a1 + 22);
  v5 = *((_DWORD *)v2 + 28);
  v6 = *((_DWORD *)v2 + 3);
  v38 = v5;
  v25 = *((_DWORD *)v2 + 32);
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v5;
  v8 = (char *)v2 + 168;
  v34 = *((_QWORD *)v2 + 20);
  v28 = *((_QWORD *)v2 + 2);
  v29 = *((_QWORD *)v2 + 3);
  v30 = *((_QWORD *)v2 + 4);
  v32 = v7;
  if ( v6 >= *((_DWORD *)v2 + 29) )
    v6 = *((_DWORD *)v2 + 29);
  v27 = (char *)v2 + 168;
  v26 = v6;
  if ( v5 < v6 )
  {
    v9 = v5 + *((_DWORD *)v2 + 33);
    v35 = v4;
    v39 = v9;
    do
    {
      v10 = *(_DWORD *)v8;
      v11 = *(_DWORD *)v2;
      v12 = *(_DWORD *)v8;
      v13 = *((_QWORD *)v8 + 1);
      v14 = *((_QWORD *)v8 + 2);
      v15 = *((_QWORD *)v8 + 3);
      v16 = *((_DWORD *)v8 + 1);
      v33 = 0x1C0000000LL + 16LL * (v9 & 3) + 3363952;
      if ( v16 >= *((_DWORD *)v2 + 2) )
        v16 = *((_DWORD *)v2 + 2);
      if ( v10 <= v11 )
        v12 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v12 + v7) && v12 < v16 )
      {
        v17 = v7 + 2LL * v12;
        v18 = v11 - v10;
        v19 = v7 + 2LL * v16;
        if ( v18 > 0 )
        {
          v13 += v28 * v18;
          v15 += v30 * v18;
          v8 = v27;
          v14 += v29 * v18;
        }
        v31 = 0LL;
        v20 = (v19 - v17 + 1) >> 1;
        if ( v17 > v19 )
          v20 = 0LL;
        if ( v20 )
        {
          v21 = (_WORD *)(v7 + 2LL * v12);
          v22 = v12 + v25;
          do
          {
            v23 = *(_DWORD *)(v33 + 4LL * (v22 & 3));
            v24 = XEPALOBJ::ulDispatchGFPEFunction(
                    v34,
                    *(unsigned int *)(*(_QWORD *)v34 + 100LL),
                    8
                  * (Saturation16_5[(unsigned __int64)(unsigned int)(v23 + (HIDWORD(v13) >> 11)) >> 16] | ((Saturation16_5[(unsigned __int64)(unsigned int)(v23 + (HIDWORD(v14) >> 11)) >> 16] | (Saturation16_5[(unsigned __int64)(unsigned int)(v23 + (HIDWORD(v15) >> 11)) >> 16] << 8)) << 8)));
            v15 += v30;
            v13 += v28;
            *v21 = v24;
            v14 += v29;
            ++v21;
            ++v22;
            ++v31;
          }
          while ( v31 < v20 );
          v2 = a2;
          v5 = v38;
          v7 = v32;
          v6 = v26;
          v8 = v27;
          v3 = a1;
        }
      }
      v7 += v35;
      LOBYTE(v9) = v39 + 1;
      v8 += 40;
      v32 = v7;
      ++v5;
      v27 = v8;
      v38 = v5;
      ++v39;
    }
    while ( v5 < v6 );
  }
}
