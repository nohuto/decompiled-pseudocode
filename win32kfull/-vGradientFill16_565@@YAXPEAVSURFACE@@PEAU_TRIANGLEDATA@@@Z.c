/*
 * XREFs of ?vGradientFill16_565@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02FAF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill16_565(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r11
  struct SURFACE *v3; // r13
  int v4; // ebx
  char *v5; // r14
  int v6; // esi
  __int64 v7; // rdi
  int v8; // eax
  int v9; // ebp
  int v10; // r10d
  int v11; // r9d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // r15d
  int v16; // r9d
  _WORD *v17; // r12
  unsigned __int64 v18; // r10
  int v19; // esi
  unsigned __int64 v20; // r15
  char v21; // r8
  int v22; // r10d
  unsigned __int64 v23; // r8
  __int16 v24; // r9
  unsigned __int64 v25; // r8
  __int16 v26; // r9
  unsigned __int64 v27; // r8
  int v28; // [rsp+4h] [rbp-94h]
  int v29; // [rsp+8h] [rbp-90h]
  __int64 v30; // [rsp+10h] [rbp-88h]
  __int64 v31; // [rsp+18h] [rbp-80h]
  __int64 v32; // [rsp+20h] [rbp-78h]
  char *v33; // [rsp+28h] [rbp-70h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  int v37; // [rsp+B0h] [rbp+18h]
  int v38; // [rsp+B8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v37 = v4;
  v33 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v30 = *((_QWORD *)a2 + 2);
  v31 = *((_QWORD *)a2 + 3);
  v32 = *((_QWORD *)a2 + 4);
  v28 = *((_DWORD *)a2 + 32);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v8 = *((_DWORD *)a2 + 33);
  v29 = v6;
  if ( v4 < v6 )
  {
    v9 = v8 + v4;
    v34 = *((int *)a1 + 22);
    v38 = v8 + v4;
    do
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = *(_DWORD *)v2;
      v12 = *((_QWORD *)v5 + 3);
      v13 = *((_QWORD *)v5 + 2);
      v14 = *((_QWORD *)v5 + 1);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      v15 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 <= v11 )
        v15 = *(_DWORD *)v2;
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v15 + v7) && v15 < v10 )
      {
        v16 = v11 - *(_DWORD *)v5;
        v17 = (_WORD *)(v7 + 2LL * v15);
        v18 = v7 + 2LL * v10;
        if ( v16 > 0 )
        {
          v14 += v30 * v16;
          v13 += v31 * v16;
          v12 += v32 * v16;
        }
        if ( (unsigned __int64)v17 < v18 )
        {
          v19 = v15 + v28;
          v20 = v18;
          do
          {
            v21 = v19++;
            v22 = *(_DWORD *)(0x1C0000000LL + 16LL * (v9 & 3) + 3323776 + 4LL * (v21 & 3));
            v23 = HIDWORD(v14);
            v14 += v30;
            v24 = byte_1C032B0C0[(unsigned __int64)(v22 + ((unsigned int)v23 >> 11)) >> 16];
            v25 = HIDWORD(v13);
            v13 += v31;
            v26 = byte_1C032B280[(unsigned __int64)(v22 + ((unsigned int)v25 >> 10)) >> 16] | (unsigned __int16)(v24 << 6);
            v27 = HIDWORD(v12);
            v12 += v32;
            *v17++ = byte_1C032B0C0[(unsigned __int64)(v22 + ((unsigned int)v27 >> 11)) >> 16] | (unsigned __int16)(32 * v26);
          }
          while ( (unsigned __int64)v17 < v20 );
          v2 = a2;
          v4 = v37;
          v6 = v29;
          v5 = v33;
          v9 = v38;
          v3 = a1;
        }
      }
      v7 += v34;
      v5 += 40;
      ++v4;
      ++v9;
      v33 = v5;
      v37 = v4;
      v38 = v9;
    }
    while ( v4 < v6 );
  }
}
