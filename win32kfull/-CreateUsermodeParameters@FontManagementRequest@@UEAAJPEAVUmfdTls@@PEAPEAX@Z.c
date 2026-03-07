__int64 __fastcall FontManagementRequest::CreateUsermodeParameters(
        FontManagementRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r15
  char *v11; // rax
  _QWORD *v12; // rdi
  char *v13; // rcx
  const void *v14; // rdx
  struct _FONTOBJ *v15; // rdx
  unsigned int v17; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v18[3]; // [rsp+44h] [rbp-34h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+20h] BYREF

  v18[0] = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  if ( !UmfdTls::TryComputeAlignedFieldSizes(
          0x38u,
          v18,
          0x40u,
          &v17,
          *((_DWORD *)this + 15),
          &v19,
          *((_DWORD *)this + 18),
          &v20) )
    return 3221225495LL;
  v6 = v19;
  v7 = v19 + v20;
  if ( v19 + v20 < v19 )
    return 3221225495LL;
  v8 = v17;
  v9 = v7 + v17;
  if ( v7 + v17 < v17 )
    return 3221225495LL;
  v10 = v18[0];
  if ( v9 + v18[0] < v18[0] )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v9 + v18[0], 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = &v11[v10];
  v13 = &v11[v10 + v8];
  *((_QWORD *)this + 13) = v13;
  *((_QWORD *)this + 14) = &v13[v6];
  v14 = (const void *)*((_QWORD *)this + 8);
  if ( v14 )
    memmove(v13, v14, *((unsigned int *)this + 15));
  else
    *((_QWORD *)this + 13) = 0LL;
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 14) = 0LL;
  v15 = (struct _FONTOBJ *)*((_QWORD *)this + 6);
  if ( v15 )
  {
    FontDriverDdiRequest::PrepareUsermodeFontObj((struct UmfdTls *)a2, v15, *((struct _FONTOBJ **)this + 12));
    v12[1] = *((_QWORD *)this + 12);
  }
  *v12 = 0LL;
  *((_DWORD *)v12 + 4) = *((_DWORD *)this + 14);
  *((_DWORD *)v12 + 5) = *((_DWORD *)this + 15);
  v12[3] = *((_QWORD *)this + 13);
  *((_DWORD *)v12 + 8) = *((_DWORD *)this + 18);
  v12[5] = *((_QWORD *)this + 14);
  *a3 = v12;
  return 0LL;
}
