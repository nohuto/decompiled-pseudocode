__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v6; // rsi
  unsigned int v7; // r9d
  int v8; // eax
  unsigned int v9; // r10d
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  bool v13; // dl
  unsigned int v14; // eax
  unsigned int v15; // eax
  char *v16; // rax
  _QWORD *v17; // rbx

  v6 = 0LL;
  v7 = 0;
  v8 = *((_DWORD *)this + 20);
  v9 = 2 * v8;
  v10 = 4 * v8;
  if ( v10 + 7 < v10 )
  {
    v13 = 0;
  }
  else
  {
    v6 = (v10 + 7) & 0xFFFFFFF8;
    v11 = v9 + 7;
    v12 = -1;
    if ( v9 + 7 >= v9 )
      v12 = v9 + 7;
    v13 = v11 >= v9;
    v14 = v12 & 0xFFFFFFF8;
    if ( v11 >= v9 )
      v7 = v14;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( v7 + (unsigned int)v6 < (unsigned int)v6 )
    return 3221225495LL;
  v15 = v7 + v6 + 64;
  if ( v15 < 0x40 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v16 = (char *)UmfdTls::CommitUMBuffer(a2, v7 + (unsigned int)v6 + 112, 1);
  v17 = v16;
  if ( !v16 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v16 + 48;
  *((_QWORD *)this + 12) = v16 + 112;
  *((_QWORD *)this + 13) = &v16[v6 + 112];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 6), (struct _FONTOBJ *)(v16 + 48));
  v17[1] = *((_QWORD *)this + 11);
  *v17 = *((_QWORD *)this + 5);
  *((_DWORD *)v17 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v17 + 10) = *((_DWORD *)this + 20);
  v17[3] = *((_QWORD *)this + 12);
  memmove(*((void **)this + 12), *((const void **)this + 8), 4LL * *((unsigned int *)this + 20));
  v17[4] = *((_QWORD *)this + 13);
  *a3 = v17;
  return 0LL;
}
