void __fastcall vSrcCopyS16D4(struct BLTINFO *a1)
{
  int *v1; // rdi
  __int64 v2; // rsi
  int v3; // ebx
  _BYTE *v4; // rsi
  unsigned __int16 *v5; // r14
  XLATEOBJ *v6; // rax
  int v7; // ebp
  _BYTE *v8; // r15
  unsigned __int16 *v9; // r12
  int v10; // r13d
  char v11; // bl
  char v12; // al
  int v14; // [rsp+88h] [rbp+10h]
  int v15; // [rsp+90h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((int *)a1 + 14);
  v3 = v2 + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 1));
  v14 = v3;
  v5 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * *((int *)a1 + 12));
  v15 = *((_DWORD *)a1 + 8);
  v6 = *(XLATEOBJ **)a1;
  for ( pxlo = *(XLATEOBJ **)a1; ; v6 = pxlo )
  {
    v7 = v1[14];
    v8 = v4;
    v9 = v5;
    if ( (v7 & 1) != 0 )
    {
      v9 = v5 + 1;
      v8 = v4 + 1;
      *v4 = XLATEOBJ_iXlate(v6, *v5) | *v4 & 0xF0;
      ++v7;
    }
    v10 = v7 + 1;
    if ( v7 + 1 < v3 )
    {
      do
      {
        v11 = XLATEOBJ_iXlate(pxlo, v9[1]);
        v12 = XLATEOBJ_iXlate(pxlo, *v9);
        v9 += 2;
        v7 += 2;
        *v8 = v11 | (16 * v12);
        v10 += 2;
        ++v8;
      }
      while ( v10 < v14 );
      v1 = (int *)a1;
      v3 = v14;
    }
    if ( v7 < v3 )
      *v8 = (16 * XLATEOBJ_iXlate(pxlo, *v9)) | *v8 & 0xF;
    if ( !--v15 )
      break;
    v5 = (unsigned __int16 *)((char *)v5 + v1[10]);
    v4 += v1[11];
  }
}
