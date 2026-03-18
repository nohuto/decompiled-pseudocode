/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x14025A33C
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E71BC (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

__int64 __fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int v12; // eax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v13, 0);
  if ( a3 )
  {
    v12 = *(_DWORD *)(a1 + 200);
    if ( (v12 & 0x80000) == 0 )
      *(_DWORD *)(a1 + 200) = v12 | 0x200000;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 200);
    v8 = v7 | 0x80000;
    v9 = v7 | 0x180000;
    v10 = v8 & 0xFFEFFFFF;
    if ( !a2 )
      v9 = v10;
    *(_DWORD *)(a1 + 200) = v9 & 0xFFDFFFFF;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
}
