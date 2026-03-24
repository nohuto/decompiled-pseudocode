/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00A6200
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00A658C (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C00A6694 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C016DB40 (memmove.c)
 */

__int64 __fastcall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // r12
  unsigned int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // ecx
  char v11; // al
  unsigned int v12; // eax
  char *v13; // rax
  _QWORD *v14; // rdi

  v5 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)this + 7) + 72LL);
  v8 = *((_DWORD *)this + 20);
  if ( v8 + 7 < v8 )
    return 3221225495LL;
  v9 = (v8 + 7) & 0xFFFFFFF8;
  v10 = v7 != 0 ? 0x14 : 0;
  if ( v10 + 7 < v10 )
  {
    v11 = 0;
  }
  else
  {
    v6 = (v10 + 7) & 0xFFFFFFF8;
    v11 = 1;
  }
  if ( !v11 )
    return 3221225495LL;
  if ( v6 + (unsigned int)v9 < (unsigned int)v9 )
    return 3221225495LL;
  if ( v6 + (unsigned int)v9 + 64 < 0x40 )
    return 3221225495LL;
  v12 = v6 + v9 + 144;
  if ( v12 < 0x50 )
    return 3221225495LL;
  if ( v12 >= 0xFFFFFFD0 )
    return 3221225495LL;
  v13 = (char *)UmfdTls::CommitUMBuffer(a2, v6 + (unsigned int)v9 + 192, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225495LL;
  *((_QWORD *)this + 13) = v13 + 48;
  *((_QWORD *)this + 14) = v13 + 128;
  *((_QWORD *)this + 15) = v13 + 192;
  *((_QWORD *)this + 16) = &v13[v9 + 192];
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), *((struct _FONTOBJ **)this + 13));
  *(_DWORD *)(*((_QWORD *)this + 13) + 64LL) = *(_DWORD *)(*((_QWORD *)this + 7) + 64LL);
  if ( v7 )
  {
    memmove(*((void **)this + 16), *(const void **)(*((_QWORD *)this + 7) + 72LL), v6);
    v5 = *((_QWORD *)this + 16);
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)this + 13) + 72LL) = v5;
  v14[2] = *((_QWORD *)this + 13);
  *v14 = *((_QWORD *)this + 5);
  *((_DWORD *)v14 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v14 + 3) = *((_DWORD *)this + 13);
  v14[3] = *((_QWORD *)this + 14);
  v14[4] = *((_QWORD *)this + 15);
  *((_DWORD *)v14 + 10) = *((_DWORD *)this + 20);
  *a3 = v14;
  return 0LL;
}
