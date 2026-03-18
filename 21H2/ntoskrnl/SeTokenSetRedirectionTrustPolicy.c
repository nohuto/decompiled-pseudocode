/*
 * XREFs of SeTokenSetRedirectionTrustPolicy @ 0x1402557A4
 * Callers:
 *     PspSetRedirectionTrustPolicy @ 0x1406DD598 (PspSetRedirectionTrustPolicy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeTokenSetRedirectionTrustPolicy(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  unsigned int v6; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v8, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( a2 )
    v6 = v5 & 0xFE7FFFFF | 0x1000000;
  else
    v6 = v5 & 0xFE7FFFFF | 0x800000;
  *(_DWORD *)(a1 + 200) = v6;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v8, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
}
