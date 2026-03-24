/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x140283EC8
 * Callers:
 *     MiChangePageAttributeBatch @ 0x140283C20 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiChangePageAttributeContiguous @ 0x140328CE8 (MiChangePageAttributeContiguous.c)
 *     MiFlushCacheRange @ 0x140554454 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140283F70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiFlushHyperSpace @ 0x14032BF00 (MiFlushHyperSpace.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    v8 = -805306366;
    if ( (_DWORD)a3 != 2 )
      v8 = -1073741824;
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(v7, 0LL, v8, a4);
      KeInvalidateRangeAllCachesNoIpi(v9, 4096LL);
      LOBYTE(v10) = 17;
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v9, v10, 0x80000000LL);
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  if ( v5 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace(a1, a2, a3);
  return result;
}
