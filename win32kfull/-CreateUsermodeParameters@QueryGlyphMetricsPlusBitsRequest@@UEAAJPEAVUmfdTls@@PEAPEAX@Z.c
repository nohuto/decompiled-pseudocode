__int64 __fastcall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r14d
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  int v12; // eax
  bool v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  char *v16; // rax
  _QWORD *v17; // rdi
  struct _FONTOBJ *v18; // r8
  char *v19; // rax

  v6 = 0;
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this + 7) + 72LL);
  v9 = *((_DWORD *)this + 20);
  if ( v9 + 7 < v9 )
  {
    v13 = 0;
  }
  else
  {
    v6 = (v9 + 7) & 0xFFFFFFF8;
    v10 = v8 != 0 ? 0x14 : 0;
    v11 = v10 + 7;
    v12 = -1;
    if ( v10 + 7 >= v10 )
      v12 = v10 + 7;
    v13 = v11 >= v10;
    v14 = v12 & 0xFFFFFFF8;
    if ( v11 >= v10 )
      v7 = v14;
  }
  if ( !v13 )
    return 3221225495LL;
  if ( v7 + v6 < v6 )
    return 3221225495LL;
  if ( v7 + v6 + 64 < 0x40 )
    return 3221225495LL;
  v15 = v7 + v6 + 144;
  if ( v15 < 0x50 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v16 = (char *)UmfdTls::CommitUMBuffer(a2, v7 + v6 + 192, 1);
  v17 = v16;
  if ( !v16 )
    return 3221225495LL;
  v18 = (struct _FONTOBJ *)(v16 + 48);
  *((_QWORD *)this + 13) = v16 + 48;
  v19 = v16 + 128;
  *((_QWORD *)this + 14) = v19;
  v19 += 64;
  *((_QWORD *)this + 15) = v19;
  *((_QWORD *)this + 16) = &v19[v6];
  FontDriverDdiRequest::PrepareUsermodeFontObj((struct UmfdTls *)a2, *((struct _FONTOBJ **)this + 7), v18);
  *(_DWORD *)(*((_QWORD *)this + 13) + 64LL) = *(_DWORD *)(*((_QWORD *)this + 7) + 64LL);
  if ( v8 )
    memmove(*((void **)this + 16), *(const void **)(*((_QWORD *)this + 7) + 72LL), v7);
  else
    *((_QWORD *)this + 16) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 13) + 72LL) = *((_QWORD *)this + 16);
  v17[2] = *((_QWORD *)this + 13);
  *v17 = *((_QWORD *)this + 5);
  *((_DWORD *)v17 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v17 + 3) = *((_DWORD *)this + 13);
  v17[3] = *((_QWORD *)this + 14);
  v17[4] = *((_QWORD *)this + 15);
  *((_DWORD *)v17 + 10) = *((_DWORD *)this + 20);
  *a3 = v17;
  return 0LL;
}
