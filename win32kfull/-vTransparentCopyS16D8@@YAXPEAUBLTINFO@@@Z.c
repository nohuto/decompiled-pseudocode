void __fastcall vTransparentCopyS16D8(struct BLTINFO *a1)
{
  int v2; // ecx
  int v3; // r14d
  __int64 v4; // rax
  int v5; // edi
  _WORD *v6; // rsi
  _BYTE *v7; // rbp
  _WORD *v8; // r13
  _BYTE *v9; // r12
  int v10; // r15d
  ULONG v11; // edx
  int v12; // [rsp+68h] [rbp+10h]
  XLATEOBJ *pxlo; // [rsp+70h] [rbp+18h]

  v2 = *((_DWORD *)a1 + 7);
  v12 = v2;
  v3 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  if ( v4 )
    v5 = **(_DWORD **)(v4 + 112) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 8LL);
  else
    LOWORD(v5) = -1;
  v6 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v7 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  while ( v3 )
  {
    --v3;
    v8 = v6;
    v9 = v7;
    v10 = v2;
    if ( v2 )
    {
      do
      {
        --v10;
        v11 = (unsigned __int16)(v5 & *v8++);
        if ( v11 != *((_DWORD *)a1 + 37) )
          *v9 = XLATEOBJ_iXlate(pxlo, v11);
        ++v9;
      }
      while ( v10 );
      v2 = v12;
    }
    v6 = (_WORD *)((char *)v6 + *((int *)a1 + 10));
    v7 += *((int *)a1 + 11);
  }
}
