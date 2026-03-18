/*
 * XREFs of SeTokenGetNoChildProcessRestricted @ 0x140205D38
 * Callers:
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406E9BE0 (PspGetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 */

bool __fastcall SeTokenGetNoChildProcessRestricted(__int64 a1, bool *a2, bool *a3, bool *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  bool result; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v9 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  *a2 = (v9 & 0x80000) != 0;
  result = (v9 & 0x100000) != 0;
  *a3 = result;
  *a4 = (v9 & 0x200000) != 0;
  return result;
}
