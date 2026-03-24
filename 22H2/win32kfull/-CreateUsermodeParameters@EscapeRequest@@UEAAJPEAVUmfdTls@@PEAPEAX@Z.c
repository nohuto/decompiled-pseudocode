/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DE940
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00A658C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // esi
  char v9; // al
  unsigned int v10; // eax
  char *v11; // rax
  _DWORD *v12; // rdi
  const void *v13; // rdx

  v5 = 0;
  v6 = *((_DWORD *)this + 16);
  v7 = *((_DWORD *)this + 13);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v8 = (v7 + 7) & 0xFFFFFFF8;
  if ( v6 + 7 < v6 )
  {
    v9 = 0;
  }
  else
  {
    v5 = (v6 + 7) & 0xFFFFFFF8;
    v9 = 1;
  }
  if ( !v9 )
    return 3221225495LL;
  v10 = v5 + v8;
  if ( v5 + v8 < v8 )
    return 3221225495LL;
  if ( v10 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v11 = (char *)UmfdTls::CommitUMBuffer(a2, v10 + 48, 1);
  v12 = v11;
  if ( !v11 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v11 + 48;
  *((_QWORD *)this + 12) = &v11[v8 + 48];
  v13 = (const void *)*((_QWORD *)this + 7);
  if ( v13 )
    memmove(*((void **)this + 11), v13, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v12 = 0LL;
  v12[2] = *((_DWORD *)this + 12);
  v12[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v12 + 2) = *((_QWORD *)this + 11);
  v12[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v12 + 4) = *((_QWORD *)this + 12);
  *a3 = v12;
  return 0LL;
}
