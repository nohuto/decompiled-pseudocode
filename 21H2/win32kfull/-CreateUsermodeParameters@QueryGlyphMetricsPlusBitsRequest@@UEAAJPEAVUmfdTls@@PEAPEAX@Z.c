/*
 * XREFs of ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C000C710
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C000C66C (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@III.c)
 *     ?PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z @ 0x1C000CC80 (-PrepareUsermodeFontObj@FontDriverDdiRequest@@KAXPEAVUmfdTls@@PEAU_FONTOBJ@@1@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall QueryGlyphMetricsPlusBitsRequest::CreateUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  __int64 v5; // rdi
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ecx
  char v12; // dl
  unsigned int v13; // eax
  unsigned int v14; // r15d
  _QWORD *v15; // rsi
  struct _FONTOBJ *v16; // r8
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  void **v19; // [rsp+80h] [rbp+18h]

  v19 = a3;
  v5 = 0LL;
  v18 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 7) + 72LL);
  v7 = *((_DWORD *)this + 20);
  if ( v7 + 7 < v7 )
    return 3221225495LL;
  v8 = (v7 + 7) & 0xFFFFFFF8;
  v9 = v6 != 0 ? 0x14 : 0;
  v10 = v9 + 7;
  if ( v9 + 7 < v9 )
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
  if ( v14 + v8 < v8 )
    return 3221225495LL;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v18, 0x30u, 0x50u, 0x40u, v14 + v8);
  v15 = (_QWORD *)v18;
  if ( !v18 )
    return 3221225495LL;
  v16 = (struct _FONTOBJ *)(v18 + 48);
  *((_QWORD *)this + 13) = v18 + 48;
  *((_QWORD *)this + 14) = v15 + 16;
  *((_QWORD *)this + 15) = v15 + 24;
  *((_QWORD *)this + 16) = (char *)v15 + v8 + 192;
  FontDriverDdiRequest::PrepareUsermodeFontObj(a2, *((struct _FONTOBJ **)this + 7), v16);
  *(_DWORD *)(*((_QWORD *)this + 13) + 64LL) = *(_DWORD *)(*((_QWORD *)this + 7) + 64LL);
  if ( v6 )
  {
    memmove(*((void **)this + 16), *(const void **)(*((_QWORD *)this + 7) + 72LL), v14);
    v5 = *((_QWORD *)this + 16);
  }
  else
  {
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)(*((_QWORD *)this + 13) + 72LL) = v5;
  v15[2] = *((_QWORD *)this + 13);
  *v15 = *((_QWORD *)this + 5);
  *((_DWORD *)v15 + 2) = *((_DWORD *)this + 12);
  *((_DWORD *)v15 + 3) = *((_DWORD *)this + 13);
  v15[3] = *((_QWORD *)this + 14);
  v15[4] = *((_QWORD *)this + 15);
  *((_DWORD *)v15 + 10) = *((_DWORD *)this + 20);
  *v19 = v15;
  return 0LL;
}
