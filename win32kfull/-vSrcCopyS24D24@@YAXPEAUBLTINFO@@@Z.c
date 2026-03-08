/*
 * XREFs of ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02EEF50
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r15
  unsigned int v2; // ebp
  unsigned __int8 *v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // edi
  int v8; // ebp
  __int64 v9; // r14
  unsigned __int8 *v10; // r13
  unsigned int v11; // esi
  ULONG v12; // eax
  unsigned int v13; // ebp
  ULONG v14; // esi
  ULONG v15; // edi
  ULONG v16; // ebx
  ULONG v17; // eax
  int v18; // esi
  unsigned __int16 *v19; // r13
  ULONG v20; // eax
  int v21; // [rsp+20h] [rbp-68h]
  unsigned int v22; // [rsp+24h] [rbp-64h]
  XLATEOBJ *pxlo; // [rsp+28h] [rbp-60h]
  unsigned __int8 *v24; // [rsp+30h] [rbp-58h]
  unsigned int v26; // [rsp+98h] [rbp+10h]
  int v27; // [rsp+A0h] [rbp+18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v27 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v5 = v2;
  if ( ((unsigned __int8)v4 & 3u) <= v2 )
    v5 = v4 & 3;
  v6 = v2 - v5;
  v22 = v5;
  v7 = v6 >> 2;
  v8 = v6 & 3;
  v26 = v7;
  v21 = v8;
  while ( 1 )
  {
    v24 = v3;
    v9 = v4;
    v10 = v3;
    v11 = v5;
    if ( v5 )
    {
      do
      {
        v12 = XLATEOBJ_iXlate(pxlo, *v10 | (*(unsigned __int16 *)(v10 + 1) << 8));
        *(_BYTE *)v9 = v12;
        v10 += 3;
        *(_BYTE *)(v9 + 1) = BYTE1(v12);
        *(_BYTE *)(v9 + 2) = BYTE2(v12);
        v9 += 3LL;
        --v11;
      }
      while ( v11 );
      v7 = v26;
    }
    if ( v7 )
    {
      v13 = v7;
      do
      {
        v14 = XLATEOBJ_iXlate(pxlo, *v10 | (*(unsigned __int16 *)(v10 + 1) << 8));
        v15 = XLATEOBJ_iXlate(pxlo, v10[3] | (*((unsigned __int16 *)v10 + 2) << 8));
        v16 = XLATEOBJ_iXlate(pxlo, v10[6] | (*(unsigned __int16 *)(v10 + 7) << 8));
        v17 = XLATEOBJ_iXlate(pxlo, v10[9] | (*((unsigned __int16 *)v10 + 5) << 8));
        v10 += 12;
        *(_DWORD *)v9 = v14 | (v15 << 24);
        *(_DWORD *)(v9 + 4) = (v15 >> 8) | (v16 << 16);
        *(_DWORD *)(v9 + 8) = HIWORD(v16) | (v17 << 8);
        v9 += 12LL;
        --v13;
      }
      while ( v13 );
      v1 = a1;
      v8 = v21;
      v3 = v24;
      v7 = v26;
    }
    v18 = v8;
    if ( v8 )
    {
      v19 = (unsigned __int16 *)(v10 + 1);
      do
      {
        v20 = XLATEOBJ_iXlate(pxlo, *((unsigned __int8 *)v19 - 1) | (*v19 << 8));
        *(_BYTE *)v9 = v20;
        v19 = (unsigned __int16 *)((char *)v19 + 3);
        v9 += 3LL;
        *(_BYTE *)(v9 - 2) = BYTE1(v20);
        *(_BYTE *)(v9 - 1) = BYTE2(v20);
        --v18;
      }
      while ( v18 );
      v7 = v26;
    }
    if ( !--v27 )
      break;
    v5 = v22;
    v3 += *((int *)v1 + 10);
    v4 += *((int *)v1 + 11);
  }
}
