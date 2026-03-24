/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00A6130
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00A66DC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v5; // eax
  unsigned int v6; // edi
  char *v7; // rax
  _DWORD *v8; // r8
  __int64 v9; // rax

  v5 = *((_DWORD *)this + 15);
  if ( v5 + 7 < v5 )
    return 3221225495LL;
  v6 = (v5 + 7) & 0xFFFFFFF8;
  if ( v6 + 16 < v6 )
    return 3221225495LL;
  if ( v6 + 16 >= 0xFFFFFFC8 )
    return 3221225495LL;
  v7 = (char *)UmfdTls::CommitUMBuffer(a2, v6 + 72, 1);
  v8 = v7;
  if ( !v7 )
    return 3221225495LL;
  *((_QWORD *)this + 12) = v7 + 56;
  v9 = (__int64)&v7[v6 + 56];
  *((_QWORD *)this + 13) = v9;
  *((_QWORD *)this + 14) = v9 + 8;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v8 = **((_QWORD **)this + 5);
  v8[2] = *((_DWORD *)this + 12);
  v8[3] = *((_DWORD *)this + 13);
  v8[4] = *((_DWORD *)this + 14);
  *((_QWORD *)v8 + 3) = *((_QWORD *)this + 12);
  v8[5] = *((_DWORD *)this + 15);
  if ( *((_QWORD *)this + 9) )
    *((_QWORD *)v8 + 4) = *((_QWORD *)this + 13);
  if ( *((_QWORD *)this + 10) )
    *((_QWORD *)v8 + 5) = *((_QWORD *)this + 14);
  *a3 = v8;
  return 0LL;
}
