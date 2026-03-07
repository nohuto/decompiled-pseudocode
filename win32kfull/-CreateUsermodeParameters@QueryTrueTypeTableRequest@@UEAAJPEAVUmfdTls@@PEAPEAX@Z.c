__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        UmfdUMBuffer **a2,
        void **a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  unsigned int v7; // eax
  char v8; // al
  unsigned int v9; // ecx
  _DWORD *v10; // rax
  __int64 v11; // rdx

  v5 = 0;
  v6 = 0;
  v7 = *((_DWORD *)this + 15);
  if ( v7 + 7 < v7 )
  {
    v8 = 0;
  }
  else
  {
    v5 = (v7 + 7) & 0xFFFFFFF8;
    v6 = 8;
    v8 = 1;
  }
  if ( !v8 )
    return 3221225495LL;
  v9 = v5 + 2 * v6;
  if ( v9 < v5 )
    return 3221225495LL;
  if ( v9 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v10 = UmfdTls::CommitUMBuffer(a2, v9 + 56, 1);
  if ( !v10 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v10 + 14;
  v11 = (__int64)v10 + v5 + 56;
  *((_QWORD *)this + 13) = v11;
  *((_QWORD *)this + 14) = v11 + v6;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v10 = **((_QWORD **)this + 5);
  v10[2] = *((_DWORD *)this + 12);
  v10[3] = *((_DWORD *)this + 13);
  v10[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v10 + 3) = *((_QWORD *)this + 12);
  v10[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v10 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v10 + 5) = *((_QWORD *)this + 14);
  *a3 = v10;
  return 0LL;
}
