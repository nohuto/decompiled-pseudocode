/*
 * XREFs of SeTokenGetNoChildProcessRestricted @ 0x14029894C
 * Callers:
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14079B490 (PspGetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
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
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  *a2 = (v9 & 0x80000) != 0;
  result = (v9 & 0x100000) != 0;
  *a3 = result;
  *a4 = (v9 & 0x200000) != 0;
  return result;
}
