/*
 * XREFs of ?vTransparentCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02998F0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vTransparentCopyS32D8(XLATEOBJ **a1)
{
  XLATEOBJ *v1; // rax
  int v3; // r8d
  int v4; // r14d
  XLATEOBJ *v5; // rcx
  __int64 v6; // rax
  int v7; // edi
  ULONG *v8; // rsi
  _BYTE *v9; // rbp
  ULONG *v10; // r13
  _BYTE *v11; // r12
  int v12; // r15d
  ULONG v13; // edx
  int v14; // [rsp+68h] [rbp+10h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp+18h]

  v1 = *a1;
  v3 = *((_DWORD *)a1 + 7);
  v4 = *((_DWORD *)a1 + 8);
  v5 = a1[9];
  pxlo = v1;
  v14 = v3;
  v6 = *(_QWORD *)&v5[5].iSrcType;
  if ( v6 || ((__int64)v5[4].pulXlate & 0x100) != 0 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  v8 = &a1[1]->iUniq + *((_DWORD *)a1 + 12);
  v9 = (char *)a1[2] + *((int *)a1 + 14);
  while ( v4 )
  {
    --v4;
    v10 = v8;
    v11 = v9;
    v12 = v3;
    if ( v3 )
    {
      do
      {
        --v12;
        v13 = v7 & *v10++;
        if ( v13 != *((_DWORD *)a1 + 37) )
          *v11 = XLATEOBJ_iXlate(pxlo, v13);
        ++v11;
      }
      while ( v12 );
      v3 = v14;
    }
    v8 = (ULONG *)((char *)v8 + *((int *)a1 + 10));
    v9 += *((int *)a1 + 11);
  }
}
