/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x1405B541C
 * Callers:
 *     CmpTryConvertRegistryExclusive @ 0x14086EB14 (CmpTryConvertRegistryExclusive.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1405B5714 (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
