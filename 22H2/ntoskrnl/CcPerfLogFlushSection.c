/*
 * XREFs of CcPerfLogFlushSection @ 0x140392784
 * Callers:
 *     CcFlushCachePreProcess @ 0x14029DD60 (CcFlushCachePreProcess.c)
 *     CcFlushCacheOneRange @ 0x14029E530 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14029E8D0 (CcFlushCachePostProcessOneRange.c)
 *     CcUnpinRepinnedBcb @ 0x140392610 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EFC (EtwTraceKernelEvent.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402A13B0 (CcReferenceSharedCacheMapFileObject.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402A23E0 (ObFastDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
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
    EtwTraceKernelEvent((int)&v10, 1, 0x80020000, 5642, 4200706);
  }
}
