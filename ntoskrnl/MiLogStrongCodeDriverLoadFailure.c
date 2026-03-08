/*
 * XREFs of MiLogStrongCodeDriverLoadFailure @ 0x140A2D7CC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiResolveImageImports @ 0x14076F7A4 (MiResolveImageImports.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x1407849F8 (MiProcessKernelCfgImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402FC390 (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall MiLogStrongCodeDriverLoadFailure(const CHAR *Src, __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdi
  _QWORD *Pool; // rax
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 *v9; // rax
  int v10; // [rsp+40h] [rbp-59h] BYREF
  int v11; // [rsp+44h] [rbp-55h] BYREF
  __int64 v12; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD *v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  __int64 v18; // [rsp+90h] [rbp-9h]
  _DWORD v19[2]; // [rsp+98h] [rbp-1h] BYREF
  int *v20; // [rsp+A0h] [rbp+7h]
  int v21; // [rsp+A8h] [rbp+Fh]
  int v22; // [rsp+ACh] [rbp+13h]
  int *v23; // [rsp+B0h] [rbp+17h]
  int v24; // [rsp+B8h] [rbp+1Fh]
  int v25; // [rsp+BCh] [rbp+23h]
  __int64 *v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+C8h] [rbp+2Fh]
  int v28; // [rsp+CCh] [rbp+33h]

  if ( *(_QWORD *)&qword_140C69568 )
  {
    if ( **(_DWORD **)&qword_140C69568 > 5u )
    {
      if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL) )
      {
        tlgCreate1Sz_char((__int64)v14, Src);
        v17 = 0;
        v19[1] = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v15 = v19;
        v18 = *(_QWORD *)(a2 + 96);
        v19[0] = *(unsigned __int16 *)(a2 + 88);
        v10 = *(_DWORD *)(a2 + 120);
        v20 = &v10;
        v11 = *(_DWORD *)(a2 + 156);
        v23 = &v11;
        v12 = 2164260864LL;
        v21 = 4;
        v24 = 4;
        v26 = &v12;
        v27 = 8;
        v16 = 2;
        tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&word_140038242, 0LL, 1u, 0, 0, 8u, &v13);
      }
    }
  }
  else
  {
    v5 = -1LL;
    do
      ++v5;
    while ( Src[v5] );
    Pool = MiAllocatePool(256, v5 + *(unsigned __int16 *)(a2 + 88) + 49LL, 0x46446D4Du);
    v7 = (__int64)Pool;
    if ( Pool )
    {
      Pool[2] = Pool + 6;
      memmove(Pool + 6, Src, v5 + 1);
      v8 = (void *)(v7 + v5 + 49);
      *(_QWORD *)(v7 + 32) = v8;
      memmove(v8, *(const void **)(a2 + 96), *(unsigned __int16 *)(a2 + 88));
      *(_WORD *)(v7 + 24) = *(_WORD *)(a2 + 88);
      *(_WORD *)(v7 + 26) = *(_WORD *)(a2 + 88);
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(v7 + 44) = *(_DWORD *)(a2 + 156);
      v9 = (__int64 *)qword_140C65590;
      if ( *(PVOID **)qword_140C65590 != &qword_140C65588 )
        __fastfail(3u);
      *(_QWORD *)v7 = &qword_140C65588;
      *(_QWORD *)(v7 + 8) = v9;
      *v9 = v7;
      qword_140C65590 = v7;
    }
  }
}
