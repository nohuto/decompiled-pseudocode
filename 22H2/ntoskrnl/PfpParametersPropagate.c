/*
 * XREFs of PfpParametersPropagate @ 0x140980100
 * Callers:
 *     PfpParametersWatcher @ 0x140980230 (PfpParametersWatcher.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PfTStart @ 0x140847C60 (PfTStart.c)
 *     PfTInitialize @ 0x140848CBC (PfTInitialize.c)
 *     PfTCleanup @ 0x14097F218 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x14097F514 (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_140C65248 & 1) != 0 )
    v3 = a1[20] != dword_140C6545C;
  if ( (dword_140C65248 & 2) != 0 && a1[19] != dword_140C65464 )
    v3 |= 2u;
  if ( (dword_140C65248 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, (__int64)&PfKernelGlobals);
    PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 1);
    PfTStart((__int64)&PfTGlobals, v4, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C651C0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C651B0, 0LL);
      dword_140C651C0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C65128);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
