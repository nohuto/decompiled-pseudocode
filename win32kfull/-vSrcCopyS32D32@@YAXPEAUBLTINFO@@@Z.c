void __fastcall vSrcCopyS32D32(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // rbx
  int v2; // r13d
  int v3; // ebp
  ULONG *v4; // rdi
  ULONG *v5; // rsi
  ULONG *v6; // r14
  ULONG *v7; // r15
  int v8; // r12d
  ULONG v9; // edx
  XLATEOBJ *pxlo; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = (ULONG *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v5 = (ULONG *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  pxlo = *(XLATEOBJ **)a1;
  while ( 1 )
  {
    v6 = v4;
    v7 = v5;
    v8 = v2;
    if ( v2 )
    {
      do
      {
        v9 = *v6++;
        *v7++ = XLATEOBJ_iXlate(pxlo, v9);
        --v8;
      }
      while ( v8 );
      v1 = a1;
    }
    if ( !--v3 )
      break;
    v4 = (ULONG *)((char *)v4 + *((int *)v1 + 10));
    v5 = (ULONG *)((char *)v5 + *((int *)v1 + 11));
  }
}
