/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140872940
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  char *v6; // rbx
  signed __int64 *v7; // rdi
  struct _KTHREAD *v8; // rax

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  v7 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL);
  *a2 = *(_DWORD *)&v6[4 * v2 + 12] != 0;
  if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v8 = KeGetCurrentThread();
  if ( v8->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
