/*
 * XREFs of ExFreeCacheAwarePushLock @ 0x1405B3D70
 * Callers:
 *     ExAllocateCacheAwarePushLock @ 0x1403C8090 (ExAllocateCacheAwarePushLock.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExFreeCacheAwarePushLock(ULONG_PTR *BugCheckParameter2)
{
  ULONG_PTR *v2; // rsi
  unsigned __int64 v3; // rbx

  if ( *BugCheckParameter2 )
  {
    v2 = BugCheckParameter2;
    v3 = (-(__int64)(*(_BYTE *)(*BugCheckParameter2 + 8) != 0) & 0xFFFFFFFFFFFFFFE1uLL) + 32;
    do
    {
      if ( *v2 )
        ExFreeHeapPool(*v2);
      ++v2;
      --v3;
    }
    while ( v3 );
  }
  return ExFreeHeapPool((ULONG_PTR)BugCheckParameter2);
}
