/*
 * XREFs of ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C0299480
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C3AA0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vTransparentCopyS24D8(struct BLTINFO *a1)
{
  int v2; // r13d
  int v3; // ebp
  __int64 v4; // rsi
  _BYTE *v5; // rdi
  _BYTE *v6; // r14
  int v7; // r15d
  unsigned __int8 *v8; // r12
  int v9; // eax
  int v10; // edx
  ULONG v11; // edx
  int v12; // [rsp+60h] [rbp+8h]
  XLATEOBJ *pxlo; // [rsp+68h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v12 = v2;
  v4 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  while ( v3 )
  {
    --v3;
    v6 = v5;
    v7 = v2;
    if ( v2 )
    {
      v8 = (unsigned __int8 *)(v4 + 1);
      do
      {
        v9 = *v8;
        --v7;
        v10 = v8[1];
        v8 += 3;
        v11 = *(v8 - 4) | ((v9 | (v10 << 8)) << 8);
        if ( v11 != *((_DWORD *)a1 + 37) )
          *v6 = XLATEOBJ_iXlate(pxlo, v11);
        ++v6;
      }
      while ( v7 );
      v2 = v12;
    }
    v4 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
