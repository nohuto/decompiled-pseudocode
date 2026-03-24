/*
 * XREFs of ?vGradientFill16_555@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02D1E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16_555(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r11
  struct SURFACE *v3; // r13
  int v4; // ebx
  char *v5; // r14
  int v6; // ebp
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r15d
  int v10; // r10d
  int v11; // edi
  int v12; // r12d
  int v13; // r9d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // r9d
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdi
  int v20; // r12d
  _WORD *v21; // rbp
  unsigned __int64 v22; // r11
  __int64 v23; // r8
  int v24; // r10d
  unsigned __int64 v25; // r8
  __int16 v26; // r9
  unsigned __int64 v27; // r8
  __int16 v28; // r9
  unsigned __int64 v29; // r8
  int v30; // [rsp+0h] [rbp-98h]
  int v31; // [rsp+4h] [rbp-94h]
  _WORD *v32; // [rsp+8h] [rbp-90h]
  __int64 v33; // [rsp+10h] [rbp-88h]
  __int64 v34; // [rsp+18h] [rbp-80h]
  __int64 v35; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  char *v37; // [rsp+30h] [rbp-68h]
  __int64 v38; // [rsp+48h] [rbp-50h]
  int v41; // [rsp+B0h] [rbp+18h]
  int v42; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v41 = v4;
  v37 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v33 = *((_QWORD *)a2 + 2);
  v34 = *((_QWORD *)a2 + 3);
  v35 = *((_QWORD *)a2 + 4);
  v36 = v7;
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v30 = *((_DWORD *)a2 + 32);
  v8 = *((_DWORD *)a2 + 33);
  v31 = v6;
  if ( v4 < v6 )
  {
    v9 = v8 + v4;
    v38 = *((int *)a1 + 22);
    v42 = v8 + v4;
    do
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = *(_DWORD *)v5;
      v12 = *(_DWORD *)v5;
      v13 = *(_DWORD *)v2;
      v14 = *((_QWORD *)v5 + 3);
      v15 = *((_QWORD *)v5 + 2);
      v16 = *((_QWORD *)v5 + 1);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      if ( v11 <= v13 )
        v12 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v7 + v12) && v12 < v10 )
      {
        v17 = v13 - v11;
        v32 = (_WORD *)(v7 + 2LL * v12);
        v18 = v7 + 2LL * v10;
        if ( v17 > 0 )
        {
          v16 += v33 * v17;
          v15 += v34 * v17;
          v14 += v35 * v17;
        }
        v19 = (v18 - (unsigned __int64)v32 + 1) >> 1;
        if ( (unsigned __int64)v32 > v18 )
          v19 = 0LL;
        if ( v19 )
        {
          v20 = v30 + v12;
          v21 = v32;
          v22 = 0LL;
          do
          {
            ++v22;
            v23 = v20++ & 3;
            v24 = *(_DWORD *)(0x1C0000000LL + 16LL * (v9 & 3) + 3363952 + 4 * v23);
            v25 = HIDWORD(v16);
            v16 += v33;
            v26 = Saturation16_5[(unsigned __int64)(v24 + ((unsigned int)v25 >> 11)) >> 16];
            v27 = HIDWORD(v15);
            v15 += v34;
            v28 = Saturation16_5[(unsigned __int64)(v24 + ((unsigned int)v27 >> 11)) >> 16] | (unsigned __int16)(32 * v26);
            v29 = HIDWORD(v14);
            v14 += v35;
            *v21++ = Saturation16_5[(unsigned __int64)(v24 + ((unsigned int)v29 >> 11)) >> 16] | (unsigned __int16)(32 * v28);
          }
          while ( v22 < v19 );
          v2 = a2;
          v4 = v41;
          v7 = v36;
          v6 = v31;
          v5 = v37;
          v9 = v42;
          v3 = a1;
        }
      }
      v7 += v38;
      v5 += 40;
      v36 = v7;
      ++v4;
      v37 = v5;
      ++v9;
      v41 = v4;
      v42 = v9;
    }
    while ( v4 < v6 );
  }
}
