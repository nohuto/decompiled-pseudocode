/*
 * XREFs of ?CreateUsermodeParameters@EscapeRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C02DC360
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall EscapeRequest::CreateUsermodeParameters(EscapeRequest *this, UmfdUMBuffer **a2, void **a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // esi
  int v9; // eax
  int v10; // edx
  char v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  char *v15; // rax
  _DWORD *v16; // rdi
  char *v17; // rax
  const void *v18; // rdx

  v6 = *((_DWORD *)this + 16);
  v7 = *((_DWORD *)this + 13);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v8 = (v7 + 7) & 0xFFFFFFF8;
  v9 = v6 + 7;
  if ( v6 + 7 < v6 )
  {
    v9 = -1;
    v10 = -2147024362;
    v11 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 1;
  }
  v12 = v9 & 0xFFFFFFF8;
  v13 = 0;
  if ( v10 >= 0 )
    v13 = v12;
  if ( !v11 )
    return 3221225495LL;
  v14 = v13 + v8;
  if ( v13 + v8 < v8 )
    return 3221225495LL;
  if ( v14 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v15 = (char *)UmfdTls::CommitUMBuffer(a2, v14 + 48, 1);
  v16 = v15;
  if ( !v15 )
    return 3221225495LL;
  v17 = v15 + 48;
  *((_QWORD *)this + 11) = v17;
  *((_QWORD *)this + 12) = &v17[v8];
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
