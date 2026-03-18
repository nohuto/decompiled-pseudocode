/*
 * XREFs of PspReleaseSyscallProviderRegistrationLockExclusive @ 0x140419ED8
 * Callers:
 *     PspDestroySyscallProvider @ 0x1406596A0 (PspDestroySyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x14065994C (PspInsertSyscallProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void PspReleaseSyscallProviderRegistrationLockExclusive()
{
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSyscallProviderRegistrationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspSyscallProviderRegistrationLock);
  KeAbPostRelease((ULONG_PTR)&PspSyscallProviderRegistrationLock);
  KeLeaveCriticalRegion();
}
