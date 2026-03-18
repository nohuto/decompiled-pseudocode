/*
 * XREFs of VmpCleanProcessAddressSpace @ 0x1409D9F0C
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall VmpCleanProcessAddressSpace(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // rdi
  unsigned __int64 ExtensionTable; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (volatile signed __int64 *)(a2 + 88);
  ExAcquirePushLockExclusiveEx(a2 + 88, 0LL);
  *(_WORD *)(a2 + 106) |= 1u;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KeLeaveCriticalRegion();
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 96));
}
