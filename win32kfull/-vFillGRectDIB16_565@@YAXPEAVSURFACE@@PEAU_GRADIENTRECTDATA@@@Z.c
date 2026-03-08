/*
 * XREFs of ?vFillGRectDIB16_565@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02F90A0
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
  int v11; // eax
  int v12; // ebp
  __int64 v13; // r12
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  _WORD *v19; // r15
  _WORD *v20; // r13
  int v21; // r14d
  char v22; // r8
  int v23; // r10d
  unsigned __int64 v24; // r8
  __int16 v25; // r9
  unsigned __int64 v26; // r8
  __int16 v27; // r9
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+10h] [rbp-A8h]
  __int64 v32; // [rsp+18h] [rbp-A0h]
  __int64 v33; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  int v40; // [rsp+C0h] [rbp+8h]
  int v42; // [rsp+D0h] [rbp+18h]

  v2 = a2;
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_QWORD *)v2 + 10);
  v5 = *((_QWORD *)v2 + 11);
  v6 = *((_QWORD *)v2 + 6);
  v7 = *((_QWORD *)v2 + 7);
  v8 = *((_QWORD *)v2 + 8);
  v9 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v3;
  v31 = *((_QWORD *)v2 + 14);
  v32 = *((_QWORD *)v2 + 15);
  v33 = *((_QWORD *)v2 + 16);
  v10 = *((int *)v2 + 45);
  v34 = v9;
  v36 = v4;
  v37 = v5;
  v38 = *((_QWORD *)v2 + 12);
  v29 = v6;
  v30 = v7;
  if ( (_DWORD)v10 )
  {
    v6 += v4 * v10;
    v7 += v5 * v10;
    v29 = v6;
    v30 = v7;
    v8 += *((_QWORD *)v2 + 12) * v10;
  }
  v11 = *((_DWORD *)v2 + 37);
  v42 = *((_DWORD *)v2 + 36);
  if ( v3 < *((_DWORD *)v2 + 11) + v3 )
  {
    v12 = v11 + v3;
    v39 = *((int *)a1 + 22);
    v40 = v11 + v3;
    v13 = *((unsigned int *)v2 + 11);
    v35 = v13;
    do
    {
      v14 = *((int *)v2 + 44);
      v15 = v7;
      v16 = v6;
      v17 = v8;
      if ( (_DWORD)v14 )
      {
        v16 = v6 + v31 * v14;
        v15 = v7 + v32 * v14;
        v17 = v8 + v33 * v14;
      }
      v18 = *((int *)v2 + 8);
      v19 = (_WORD *)(v9 + 2 * v18);
      if ( v19 < &v19[*((int *)v2 + 10)] )
      {
        v20 = &v19[*((int *)v2 + 10)];
        v21 = v18 + v42;
        do
        {
          v22 = v21++;
          v23 = *(_DWORD *)(0x1C0000000LL + 16LL * (v12 & 3) + 3323776 + 4LL * (v22 & 3));
          v24 = HIDWORD(v16);
          v16 += v31;
          v25 = byte_1C032B0C0[(unsigned __int64)(v23 + ((unsigned int)v24 >> 3)) >> 16];
          v26 = HIDWORD(v15);
          v15 += v32;
          v27 = byte_1C032B280[(unsigned __int64)(v23 + ((unsigned int)v26 >> 2)) >> 16] | (unsigned __int16)(v25 << 6);
          v28 = HIDWORD(v17);
          v17 += v33;
          *v19++ = byte_1C032B0C0[(unsigned __int64)(v23 + ((unsigned int)v28 >> 3)) >> 16] | (unsigned __int16)(32 * v27);
        }
        while ( v19 < v20 );
        v2 = a2;
        v6 = v29;
        v7 = v30;
        v9 = v34;
        v12 = v40;
        v13 = v35;
        v4 = v36;
        v5 = v37;
      }
      v9 += v39;
      v8 += v38;
      v6 += v4;
      v7 += v5;
      v29 = v6;
      ++v12;
      v30 = v7;
      --v13;
      v40 = v12;
      v35 = v13;
      v34 = v9;
    }
    while ( v13 );
  }
}
