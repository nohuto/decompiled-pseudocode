/*
 * XREFs of ?CreateUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C000CB7C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C000CC80 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall QueryAdvanceWidthsRequest::CreateUsermodeParameters(
        QueryAdvanceWidthsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // edx
  char v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rax
  _QWORD *v17; // rsi

  v6 = *((_DWORD *)this + 20);
  v7 = 2 * v6;
  v8 = 4 * v6;
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v9 = (v8 + 7) & 0xFFFFFFF8;
  v10 = v7 + 7;
  if ( v7 + 7 < v7 )
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
  if ( v14 + (unsigned int)v9 < (unsigned int)v9 )
    return 3221225495LL;
  v15 = v14 + v9 + 64;
  if ( v15 < 0x40 )
    return 3221225495LL;
  if ( v15 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v16 = (char *)UmfdTls::CommitUMBuffer(a2, v14 + (unsigned int)v9 + 112, 1);
  v17 = v16;
  if ( !v16 )
    return 3221225495LL;
  *((_QWORD *)this + 11) = v16 + 48;
  *((_QWORD *)this + 12) = v16 + 112;
  *((_QWORD *)this + 13) = &v16[v9 + 112];
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
