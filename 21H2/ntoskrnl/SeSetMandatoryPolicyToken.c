/*
 * XREFs of SeSetMandatoryPolicyToken @ 0x14075563C
 * Callers:
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x140B1ED10 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x140B1EFA0 (SeMakeAnonymousLogonToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeSetMandatoryPolicyToken(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*a2 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v6, 0);
  *(_DWORD *)(a1 + 212) = *a2;
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v6, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
