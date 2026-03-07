__int64 __fastcall QueryTrueTypeOutlineRequest::CreateUsermodeParameters(
        QueryTrueTypeOutlineRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rdi
  int v7; // ecx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r10
  char *v13; // rax
  __int64 v14; // r10
  unsigned int v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v17[13]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+20h] BYREF

  v17[0] = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v17,
          0x40u,
          &v16,
          *((_QWORD *)this + 8) != 0LL ? 0x40 : 0,
          &v18,
          *((_DWORD *)this + 18),
          &v19) )
    return 3221225495LL;
  v6 = v18;
  v7 = v18 + v19;
  if ( v18 + v19 < v18 )
    return 3221225495LL;
  v8 = v16;
  v9 = v7 + v16;
  if ( v7 + v16 < v16 )
    return 3221225495LL;
  v10 = v17[0];
  if ( v9 + v17[0] < v17[0] )
    return 3221225495LL;
  v11 = UmfdTls::CommitUMBuffer(a2, v9 + v17[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = (char *)v11 + v10;
  v13 = (char *)v11 + v10 + v8;
  *((_QWORD *)this + 13) = v13;
  *((_QWORD *)this + 14) = &v13[v6];
  *((_QWORD *)this + 14) &= -(__int64)(*((_QWORD *)this + 10) != 0LL);
  *v12 = *((_QWORD *)this + 5);
  FontDriverDdiRequest::PrepareUsermodeFontObj(
    (struct UmfdTls *)a2,
    *((struct _FONTOBJ **)this + 6),
    *((struct _FONTOBJ **)this + 12));
  *(_QWORD *)(v14 + 8) = *((_QWORD *)this + 12);
  *(_DWORD *)(v14 + 16) = *((_DWORD *)this + 14);
  *(_DWORD *)(v14 + 20) = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 8) )
    *(_QWORD *)(v14 + 24) = *((_QWORD *)this + 13);
  *(_QWORD *)(v14 + 40) = *((_QWORD *)this + 14);
  *(_DWORD *)(v14 + 32) = *((_DWORD *)this + 18);
  *a3 = (void *)v14;
  return 0LL;
}
