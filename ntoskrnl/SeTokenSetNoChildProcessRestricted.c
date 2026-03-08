/*
 * XREFs of SeTokenSetNoChildProcessRestricted @ 0x140300474
 * Callers:
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407998F0 (PspSetNoChildProcessRestrictedPolicy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SeTokenSetNoChildProcessRestricted(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ecx
  unsigned int v8; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 48), 1u);
  _InterlockedOr(v13, 0);
  v7 = *(_DWORD *)(a1 + 200);
  if ( !a3 )
  {
    v10 = v7 | 0x80000;
    v11 = v7 | 0x180000;
    v12 = v10 & 0xFFEFFFFF;
    if ( !a2 )
      v11 = v12;
    v8 = v11 & 0xFFDFFFFF;
    goto LABEL_4;
  }
  if ( (v7 & 0x80000) == 0 )
  {
    v8 = v7 | 0x200000;
LABEL_4:
    *(_DWORD *)(a1 + 200) = v8;
  }
  *(_QWORD *)(a1 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  _InterlockedOr(v13, 0);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  return KeLeaveCriticalRegionThread(KeGetCurrentThread());
}
