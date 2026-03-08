/*
 * XREFs of CcWriteBehindAsyncFlushOneRange @ 0x140539380
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1405387F4 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     CcFlushCacheAcquireRange @ 0x14021A0CC (CcFlushCacheAcquireRange.c)
 *     CcFlushCacheOneRange @ 0x14021B070 (CcFlushCacheOneRange.c)
 *     CcFlushCachePostProcessOneRange @ 0x14021B410 (CcFlushCachePostProcessOneRange.c)
 */

char __fastcall CcWriteBehindAsyncFlushOneRange(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bl
  __int64 v4; // rax
  int v5; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  if ( !v1 || (*(_DWORD *)(v1 + 152) & 0x4000000) != 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 72);
  *(_WORD *)v4 = 1;
  *(_BYTE *)(v4 + 2) = 6;
  *(_DWORD *)(v4 + 4) = 0;
  v4 += 8LL;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)v4 = v4;
  while ( CcFlushCacheAcquireRange(a1) )
  {
    v5 = CcFlushCacheOneRange((__int64 *)a1);
    if ( !*(_DWORD *)(a1 + 60) && v5 >= 0 )
      return 1;
    if ( !CcFlushCachePostProcessOneRange((__int64 *)a1) )
      return v2;
  }
  return v2;
}
