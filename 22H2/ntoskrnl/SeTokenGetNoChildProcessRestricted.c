/*
 * XREFs of SeTokenGetNoChildProcessRestricted @ 0x140251258
 * Callers:
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406A5360 (PspGetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *a2 = (v9 & 0x80000) != 0;
  result = (v9 & 0x100000) != 0;
  *a3 = result;
  *a4 = (v9 & 0x200000) != 0;
  return result;
}
