/*
 * XREFs of MiReturnCcAccessLog @ 0x1402DC41C
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1402DC3D4 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1406A3DCC (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14035B540 (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x14035B5FC (MmFreeAccessPfnBuffer.c)
 */

__int64 __fastcall MiReturnCcAccessLog(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = a1[3];
    a1[4] = result;
  }
  if ( qword_140C67C40 || (result = _InterlockedCompareExchange64(&qword_140C67C40, (signed __int64)a1, 0LL)) != 0 )
  {
    if ( a1 )
    {
      if ( (_QWORD *)a1[4] == a1 + 9 )
        return MmFreeAccessPfnBuffer(a1);
      else
        return MiQueuePageAccessLog(a1);
    }
  }
  return result;
}
