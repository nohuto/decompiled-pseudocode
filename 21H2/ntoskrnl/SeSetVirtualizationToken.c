/*
 * XREFs of SeSetVirtualizationToken @ 0x14061DD08
 * Callers:
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 */

_QWORD *__fastcall SeSetVirtualizationToken(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // eax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v11, 0);
  v5 = *(_DWORD *)(a1 + 200);
  if ( !a2 )
  {
    v10 = v5 & 0xFFFFFBFF;
    goto LABEL_5;
  }
  if ( (v5 & 0x200) != 0 )
  {
    v10 = v5 | 0x400;
LABEL_5:
    *(_DWORD *)(a1 + 200) = v10;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v11, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
}
