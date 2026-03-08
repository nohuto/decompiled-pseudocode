/*
 * XREFs of CcPerfLogFlushCache @ 0x140390BEC
 * Callers:
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x140343320 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushCache(__int64 a1, __int64 a2, __int64 *a3, int a4, char a5, char a6, char a7)
{
  unsigned __int64 v11; // rax
  int v12; // eax
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+48h] [rbp-28h]
  int v16; // [rsp+4Ch] [rbp-24h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  _QWORD *v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]

  if ( a2 )
  {
    v17 = 0LL;
    v11 = CcReferenceSharedCacheMapFileObject(a2);
    v13[1] = *(_QWORD *)(v11 + 24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v11, 0x63536343u);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    v16 = *(_DWORD *)(a2 + 152);
    v13[0] = a1;
    v15 = a4;
    v12 = a5 != 0;
    LODWORD(v17) = v12;
    if ( a6 )
    {
      v12 |= 2u;
      LODWORD(v17) = v12;
    }
    if ( a7 )
      LODWORD(v17) = v12 | 4;
    v20 = 0;
    v18 = v13;
    v19 = 40;
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80020000, 0x1609u, 0x401902u);
  }
}
