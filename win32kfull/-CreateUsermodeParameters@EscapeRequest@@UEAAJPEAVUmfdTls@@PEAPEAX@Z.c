/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0308940
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C011EA58 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // dl
  unsigned int v13; // eax
  unsigned int v14; // eax
  char *v15; // rax
  _DWORD *v16; // rdi
  char *v17; // rax
  const void *v18; // rdx

  v6 = 0;
  v7 = 0;
  v8 = *((_DWORD *)this + 16);
  v9 = *((_DWORD *)this + 13);
  if ( v9 + 7 < v9 )
  {
    v12 = 0;
  }
  else
  {
    v6 = (v9 + 7) & 0xFFFFFFF8;
    v10 = v8 + 7;
    v11 = -1;
    if ( v8 + 7 >= v8 )
      v11 = v8 + 7;
    v12 = v10 >= v8;
    v13 = v11 & 0xFFFFFFF8;
    if ( v10 >= v8 )
      v7 = v13;
  }
  if ( !v12 )
    return 3221225495LL;
  v14 = v7 + v6;
  if ( v7 + v6 < v6 )
    return 3221225495LL;
  if ( v14 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v15 = (char *)UmfdTls::CommitUMBuffer(a2, v14 + 48, 1);
  v16 = v15;
  if ( !v15 )
    return 3221225495LL;
  v17 = v15 + 48;
  *((_QWORD *)this + 11) = v17;
  *((_QWORD *)this + 12) = &v17[v6];
  v18 = (const void *)*((_QWORD *)this + 7);
  if ( v18 )
    memmove(v17, v18, *((unsigned int *)this + 13));
  else
    *((_QWORD *)this + 11) = 0LL;
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)v16 = 0LL;
  v16[2] = *((_DWORD *)this + 12);
  v16[3] = *((_DWORD *)this + 13);
  *((_QWORD *)v16 + 2) = *((_QWORD *)this + 11);
  v16[6] = *((_DWORD *)this + 16);
  *((_QWORD *)v16 + 4) = *((_QWORD *)this + 12);
  *a3 = v16;
  return 0LL;
}
