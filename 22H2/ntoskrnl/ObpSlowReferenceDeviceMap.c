/*
 * XREFs of ObpSlowReferenceDeviceMap @ 0x1407AFF58
 * Callers:
 *     ObpLookupObjectName @ 0x1406ED7D0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x1406FC9A0 (ObpReferenceCurrentDeviceMap.c)
 *     ObpReferenceDeviceMapFastRef @ 0x1407AFCB8 (ObpReferenceDeviceMapFastRef.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     ObDereferenceDeviceMap @ 0x1407B040C (ObDereferenceDeviceMap.c)
 */

volatile signed __int64 *__fastcall ObpSlowReferenceDeviceMap(_QWORD *a1)
{
  char *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rdx
  signed __int64 *v4; // rdi
  volatile signed __int64 *v5; // rbx
  struct _KTHREAD *v6; // rcx
  bool v7; // zf
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(CurrentServerSiloGlobals + 120);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(CurrentServerSiloGlobals + 120), 0LL);
  v5 = (volatile signed __int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd64(v5 + 30, 0xFuLL) <= 0 )
      __fastfail(0xEu);
    _m_prefetchw(a1);
    v9 = *a1;
    while ( (unsigned __int64)(v9 & 0xF) + 14 <= 0xF && v5 == (volatile signed __int64 *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(a1, v9 + 14, v9);
      if ( v10 == v9 )
        goto LABEL_2;
    }
    ObDereferenceDeviceMap((PVOID)v5);
  }
LABEL_2:
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v6 = KeGetCurrentThread();
  v7 = v6->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
    KiCheckForKernelApcDelivery();
  return v5;
}
