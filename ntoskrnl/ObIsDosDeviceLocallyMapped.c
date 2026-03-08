/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140870420
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  __int64 v2; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *v6; // rbx
  signed __int64 *p_Blink; // rdi
  struct _KTHREAD *v8; // rax

  v2 = (unsigned int)(a1 - 1);
  if ( (unsigned int)v2 > 0x19 )
    return 3221225485LL;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  v6 = CurrentServerSiloGlobals;
  p_Blink = (signed __int64 *)&CurrentServerSiloGlobals[7].Blink;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentServerSiloGlobals[7].Blink, 0LL);
  *a2 = *((_DWORD *)&v6->Blink + v2 + 1) != 0;
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  v8 = KeGetCurrentThread();
  if ( v8->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
