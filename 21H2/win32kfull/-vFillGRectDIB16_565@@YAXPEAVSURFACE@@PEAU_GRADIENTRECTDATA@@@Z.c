/*
 * XREFs of ?vFillGRectDIB16_565@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02D1140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vFillGRectDIB16_565(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  struct _GRADIENTRECTDATA *v2; // r11
  int v3; // edx
  __int64 v4; // r13
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebp
  int v12; // eax
  int v13; // r15d
  __int64 v14; // r12
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // r8
  _WORD *v20; // r9
  unsigned __int64 v21; // rbp
  _WORD *v22; // r8
  unsigned __int64 v23; // rbp
  _WORD *v24; // r13
  int v25; // r14d
  unsigned __int64 v26; // rbx
  __int64 v27; // r8
  int v28; // r10d
  unsigned __int64 v29; // r8
  __int16 v30; // r9
  unsigned __int64 v31; // r8
  __int16 v32; // r9
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v35; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v36; // [rsp+10h] [rbp-B8h]
  __int64 v37; // [rsp+18h] [rbp-B0h]
  __int64 v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  __int64 v40; // [rsp+30h] [rbp-98h]
  __int64 v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+58h] [rbp-70h]
  __int64 v43; // [rsp+60h] [rbp-68h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int64 v45; // [rsp+70h] [rbp-58h]
  int v46; // [rsp+D0h] [rbp+8h]
  int v48; // [rsp+E0h] [rbp+18h]
  int v49; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v37 = *((_QWORD *)v2 + 14);
  v38 = *((_QWORD *)v2 + 15);
  v39 = *((_QWORD *)v2 + 16);
  v10 = *((int *)v2 + 45);
  v40 = v9;
  v42 = v4;
  v43 = v5;
  v44 = *((_QWORD *)v2 + 12);
  v34 = v6;
  v35 = v7;
  v36 = v8;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v34 = v6;
    v35 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
    v36 = v8;
  }
  v11 = *((_DWORD *)v2 + 36);
  v12 = *((_DWORD *)v2 + 37);
  v49 = v11;
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v13 = v12 + v3;
    v45 = *((int *)a1 + 22);
    v46 = v12 + v3;
    v14 = *((unsigned int *)v2 + 11);
    v41 = v14;
    do
    {
      v15 = *((int *)v2 + 44);
      v16 = v7;
      v17 = v6;
      v18 = v8;
      if ( (_DWORD)v15 )
      {
        v17 = v6 + v37 * v15;
        v16 = v7 + v38 * v15;
        v18 = v8 + v39 * v15;
      }
      v19 = *((int *)v2 + 8);
      v48 = v19 + v11;
      v20 = (_WORD *)(v9 + 2 * v19);
      v21 = *((int *)v2 + 10);
      v22 = &v20[v21];
      v23 = (v21 * 2) >> 1;
      if ( v20 > v22 )
        v23 = 0LL;
      if ( v23 )
      {
        v24 = v20;
        v25 = v48;
        v26 = 0LL;
        do
        {
          ++v26;
          v27 = v25++ & 3;
          v28 = *(_DWORD *)(0x1C0000000LL + 16LL * (v13 & 3) + 3367792 + 4 * v27);
          v29 = HIDWORD(v17);
          v17 += v37;
          v30 = Saturation16_5[(unsigned __int64)(v28 + ((unsigned int)v29 >> 3)) >> 16];
          v31 = HIDWORD(v16);
          v16 += v38;
          v32 = Saturation16_6[(unsigned __int64)(v28 + ((unsigned int)v31 >> 2)) >> 16] | (unsigned __int16)(v30 << 6);
          v33 = HIDWORD(v18);
          v18 += v39;
          *v24++ = Saturation16_5[(unsigned __int64)(v28 + ((unsigned int)v33 >> 3)) >> 16] | (unsigned __int16)(32 * v32);
        }
        while ( v26 < v23 );
        v2 = a2;
        v6 = v34;
        v7 = v35;
        v8 = v36;
        v9 = v40;
        v13 = v46;
        v14 = v41;
        v4 = v42;
        v5 = v43;
      }
      v8 += v44;
      v9 += v45;
      v6 += v4;
      v11 = v49;
      v7 += v5;
      ++v13;
      v34 = v6;
      --v14;
      v35 = v7;
      v41 = v14;
      v36 = v8;
      v46 = v13;
      v40 = v9;
    }
    while ( v14 );
  }
}
