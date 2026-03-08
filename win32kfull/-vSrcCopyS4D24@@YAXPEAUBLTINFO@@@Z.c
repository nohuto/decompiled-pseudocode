/*
 * XREFs of ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02EF190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  unsigned int v2; // r12d
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // r13d
  int v10; // r12d
  unsigned int v11; // r13d
  int v12; // r9d
  __int64 v13; // r8
  unsigned __int8 *v14; // rdx
  unsigned int i; // r11d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // esi
  unsigned int v23; // r11d
  unsigned int v24; // ebx
  int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // r11d
  _BYTE *v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // ecx
  bool v32; // zf
  int v33; // [rsp+38h] [rbp+8h]
  unsigned int v34; // [rsp+40h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = v2;
  v8 = *(_QWORD *)(v4 + 16);
  v33 = v3;
  if ( ((unsigned __int8)v6 & 3u) <= v2 )
    v7 = v6 & 3;
  v34 = v7;
  v9 = v2 - v7;
  v10 = (v2 - v7) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = v6;
    v14 = (unsigned __int8 *)v5;
    for ( i = v7; i; --i )
    {
      v16 = *v14;
      if ( (v12 & 1) != 0 )
      {
        v17 = v16 & 0xF;
        ++v14;
      }
      else
      {
        v17 = v16 >> 4;
      }
      v18 = *(_DWORD *)(v8 + 4 * v17);
      LOBYTE(v12) = v12 + 1;
      *(_WORD *)v13 = v18;
      *(_BYTE *)(v13 + 2) = BYTE2(v18);
      v13 += 3LL;
    }
    v19 = v11;
    if ( v11 )
    {
      do
      {
        v20 = *v14 & 0xF;
        if ( (v12 & 1) != 0 )
        {
          v21 = v14[1];
          v14 += 2;
          v22 = *(_DWORD *)(v8 + 4 * v20);
          v23 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)v21 >> 4));
          v24 = *(_DWORD *)(v8 + 4LL * (v21 & 0xF));
          v25 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)*v14 >> 4));
        }
        else
        {
          v23 = *(_DWORD *)(v8 + 4 * v20);
          v22 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)*v14 >> 4));
          v26 = v14[1];
          v14 += 2;
          v25 = *(_DWORD *)(v8 + 4 * (v26 & 0xF));
          v24 = *(_DWORD *)(v8 + 4 * (v26 >> 4));
        }
        LOBYTE(v12) = v12 + 4;
        *(_DWORD *)v13 = v22 | (v23 << 24);
        *(_DWORD *)(v13 + 8) = HIWORD(v24) | (v25 << 8);
        *(_DWORD *)(v13 + 4) = (v23 >> 8) | (v24 << 16);
        v13 += 12LL;
        --v19;
      }
      while ( v19 );
      v3 = v33;
    }
    v27 = v10;
    if ( v10 )
    {
      v28 = (_BYTE *)(v13 + 2);
      do
      {
        v29 = *v14;
        if ( (v12 & 1) != 0 )
        {
          v30 = v29 & 0xF;
          ++v14;
        }
        else
        {
          v30 = v29 >> 4;
        }
        v31 = *(_DWORD *)(v8 + 4 * v30);
        LOBYTE(v12) = v12 + 1;
        *((_WORD *)v28 - 1) = v31;
        *v28 = BYTE2(v31);
        v28 += 3;
        --v27;
      }
      while ( v27 );
    }
    v32 = v3-- == 1;
    v33 = v3;
    if ( v32 )
      break;
    v7 = v34;
    v5 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
