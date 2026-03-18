/*
 * XREFs of SmGetRegistrationInfo @ 0x14085E9A0
 * Callers:
 *     SmProcessRegistrationRequest @ 0x14085E8F4 (SmProcessRegistrationRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x14085EA64 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x140861560 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( (dword_140D32180 & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = SmRegistrationCtxStart(&qword_140D32430);
    if ( v5 >= 0 )
      dword_140D32180 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  KeAbPostRelease((ULONG_PTR)&qword_140D321A0);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a1;
    v5 = SmRegistrationInfoFill(&qword_140D32430, v6, a2 + 8);
    if ( v5 >= 0 )
      return 0;
  }
  return (unsigned int)v5;
}
