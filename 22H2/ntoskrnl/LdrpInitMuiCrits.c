/*
 * XREFs of LdrpInitMuiCrits @ 0x140302204
 * Callers:
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1403014B4 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x140302064 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14037EC0C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14037F520 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 *     NtDelayExecution @ 0x14061A810 (NtDelayExecution.c)
 */

NTSTATUS LdrpInitMuiCrits()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( 1 )
  {
    result = _InterlockedCompareExchange(&MuiLockInitCount, 1, 0);
    if ( !result )
      break;
    if ( MuiLockInitCount == 1 )
      result = NtDelayExecution(0, &DelayInterval);
    if ( MuiLockInitCount == 2 )
      return result;
  }
  result = KiInitializeMutant((ULONG_PTR)&MuiMutex);
  MuiLockInitCount = 2;
  return result;
}
