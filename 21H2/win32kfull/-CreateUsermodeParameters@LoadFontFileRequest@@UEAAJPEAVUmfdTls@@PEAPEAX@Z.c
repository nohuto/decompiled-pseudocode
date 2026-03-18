/*
 * XREFs of ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C160
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     EngFntCacheLookUp @ 0x1C000CCE0 (EngFntCacheLookUp.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall LoadFontFileRequest::CreateUsermodeParameters(
        LoadFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  _DWORD *v6; // r15
  ULONG v7; // esi
  unsigned int v8; // ecx
  ULONG v9; // edi
  int v10; // eax
  int v11; // edx
  char v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _DWORD *v15; // rbx
  unsigned int i; // r9d
  ULONG v17; // eax
  ULONG v18; // eax
  __int64 v19; // rax
  ULONG v21[10]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned int)(*((_DWORD *)this + 10) - 1) > 2 )
    return 3221225495LL;
  v6 = EngFntCacheLookUp(*((_DWORD *)this + 34), v21);
  v7 = v6 != 0LL ? v21[0] : 0;
  if ( v7 <= 0x10 )
  {
    v9 = 0;
    v8 = 0;
  }
  else
  {
    v8 = v7 - 16;
    v9 = 0;
  }
  v10 = v8 + 7;
  if ( v8 + 7 < v8 )
  {
    v10 = -1;
    v11 = -2147024362;
    v12 = 0;
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v13 = v10 & 0xFFFFFFF8;
  v14 = 0;
  if ( v11 >= 0 )
    v14 = v13;
  if ( !v12 )
    return 3221225495LL;
  v15 = v14 >= 0xFFFFFF30 ? 0LL : UmfdTls::CommitUMBuffer(a2, v14 + 208, 0);
  if ( !v15 )
    return 3221225495LL;
  *((_QWORD *)v15 + 25) = v15 + 52;
  memset(v15, 0, 0xD0uLL);
  *((_QWORD *)v15 + 1) = v15 + 4;
  *((_QWORD *)v15 + 5) = v15 + 12;
  *((_QWORD *)v15 + 9) = v15 + 20;
  *v15 = *((_DWORD *)this + 10);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    *(_QWORD *)(*((_QWORD *)v15 + 1) + 8LL * i) = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * i) + 64LL);
    *(_QWORD *)(*((_QWORD *)v15 + 5) + 8LL * i) = *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * i);
    *(_DWORD *)(*((_QWORD *)v15 + 9) + 4LL * i) = *(_DWORD *)(*((_QWORD *)this + 14) + 4LL * i);
  }
  if ( *((_QWORD *)this + 19) )
  {
    *((_QWORD *)v15 + 14) = v15 + 30;
    v19 = *((_QWORD *)this + 19);
    *(_OWORD *)(v15 + 30) = *(_OWORD *)v19;
    *(_OWORD *)(v15 + 34) = *(_OWORD *)(v19 + 16);
    *(_OWORD *)(v15 + 38) = *(_OWORD *)(v19 + 32);
    *(_OWORD *)(v15 + 42) = *(_OWORD *)(v19 + 48);
    *((_QWORD *)v15 + 23) = *(_QWORD *)(v19 + 64);
  }
  v15[23] = *((_DWORD *)this + 33);
  v15[24] = *((_DWORD *)this + 34);
  if ( v7 <= 0x10 )
    v17 = 0;
  else
    v17 = v7 - 16;
  if ( v17 )
  {
    v15[25] = *v6;
    v18 = v7 - 16;
    if ( v7 <= 0x10 )
      v18 = 0;
    v15[48] = v18;
    if ( v7 > 0x10 )
      v9 = v7 - 16;
    memmove(v15 + 50, v6 + 4, v9);
  }
  else
  {
    v15[25] = -1;
  }
  *a3 = v15;
  return 0LL;
}
