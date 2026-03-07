void __fastcall vSrcCopyS32D4(struct BLTINFO *a1)
{
  int *v1; // rbp
  __int64 v2; // r14
  XLATEOBJ *v3; // r13
  _BYTE *v4; // r14
  ULONG *v5; // r12
  ULONG v6; // esi
  char v7; // r8
  int v8; // edi
  _BYTE *v9; // r15
  ULONG *v10; // rbx
  int v11; // eax
  int v12; // r13d
  char v13; // bp
  ULONG v14; // edx
  ULONG *v15; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((int *)a1 + 14);
  v3 = *(XLATEOBJ **)a1;
  v17 = v2 + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 1));
  pxlo = *(XLATEOBJ **)a1;
  v5 = (ULONG *)(*((_QWORD *)a1 + 1) + 4LL * *((int *)a1 + 12));
  v6 = *v5;
  v15 = v5;
  v18 = *((_DWORD *)a1 + 8);
  v7 = XLATEOBJ_iXlate(*(XLATEOBJ **)a1, *v5);
  while ( 1 )
  {
    v8 = v1[14];
    v9 = v4;
    v10 = v5;
    if ( (v8 & 1) != 0 )
    {
      v10 = v5 + 1;
      if ( v6 != *v5 )
      {
        v6 = *v5;
        v7 = XLATEOBJ_iXlate(v3, *v5);
      }
      v9 = v4 + 1;
      *v4 = v7 | *v4 & 0xF0;
      ++v8;
    }
    v11 = v17;
    v12 = v8 + 1;
    if ( v8 + 1 < v17 )
    {
      do
      {
        if ( v6 == *v10 )
        {
          v13 = v7;
        }
        else
        {
          v6 = *v10;
          v7 = XLATEOBJ_iXlate(pxlo, *v10);
          v13 = v7;
          v11 = v17;
        }
        v14 = v10[1];
        v10 += 2;
        if ( v6 != v14 )
        {
          v6 = v14;
          v7 = XLATEOBJ_iXlate(pxlo, v14);
          v11 = v17;
        }
        v8 += 2;
        v12 += 2;
        *v9++ = v7 | (16 * v13);
      }
      while ( v12 < v11 );
      v5 = v15;
      v1 = (int *)a1;
    }
    if ( v8 < v11 )
    {
      if ( v6 != *v10 )
      {
        v6 = *v10;
        v7 = XLATEOBJ_iXlate(pxlo, *v10);
      }
      *v9 = (16 * v7) | *v9 & 0xF;
    }
    if ( !--v18 )
      break;
    v3 = pxlo;
    v5 = (ULONG *)((char *)v5 + v1[10]);
    v4 += v1[11];
    v15 = v5;
  }
}
