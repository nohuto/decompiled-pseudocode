/*
 * XREFs of CcPerfLogFlushSection @ 0x140390B04
 * Callers:
 *     CcFlushCacheOneRange @ 0x14021B070 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14021B410 (CcFlushCachePostProcessOneRange.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     CcUnpinRepinnedBcb @ 0x140390990 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x140343320 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogFlushSection(__int64 a1, __int64 a2, __int64 *a3, int a4, int a5)
{
  unsigned __int64 v9; // rax
  _QWORD *v10; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  if ( a2 )
  {
    v9 = CcReferenceSharedCacheMapFileObject(a2);
    v13[1] = *(_QWORD *)(v9 + 24);
    ObFastDereferenceObjectDeferDelete((signed __int64 *)(a2 + 96), v9, 0x63536343u);
    if ( a3 )
      v14 = *a3;
    else
      v14 = 0LL;
    v12 = 0;
    v16 = a5;
    v13[0] = a1;
    v10 = v13;
    v15 = a4;
    v11 = 32;
    EtwTraceKernelEvent((__int64)&v10, 1u, 0x80020000, 0x160Au, 0x401902u);
  }
}
