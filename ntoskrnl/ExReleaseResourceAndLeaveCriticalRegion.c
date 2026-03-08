/*
 * XREFs of ExReleaseResourceAndLeaveCriticalRegion @ 0x14033AA70
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     ExpFastResourceLegacyRelease @ 0x1403C5290 (ExpFastResourceLegacyRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall ExReleaseResourceAndLeaveCriticalRegion(PERESOURCE Resource)
{
  USHORT Flag; // dx
  unsigned __int8 v2; // al
  struct _KTHREAD *v3; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx
  struct _KTHREAD *v6; // rcx
  bool v7; // zf

  Flag = Resource->Flag;
  if ( !FeatureFastResource2 )
  {
    if ( (Flag & 0x41) != 1 )
    {
      if ( (Flag & 1) == 0 )
        goto LABEL_16;
      CurrentIrql = KeGetCurrentIrql();
      CurrentThread = KeGetCurrentThread();
      if ( CurrentIrql > 2u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
      if ( CurrentIrql || (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->WaitBlock[3].SpareLong )
      {
        LOBYTE(Flag) = Resource->Flag;
        goto LABEL_16;
      }
LABEL_27:
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
LABEL_25:
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( (Flag & 0x41) == 1 )
    goto LABEL_25;
  if ( (Flag & 1) == 0 )
  {
LABEL_18:
    ExpReleaseResourceForThreadLite((ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread());
    goto LABEL_19;
  }
  v2 = KeGetCurrentIrql();
  v3 = KeGetCurrentThread();
  if ( v2 > 2u )
    KeBugCheckEx(0x1C6u, 0LL, v2, 2uLL, 0LL);
  if ( !v2 && (v3->MiscFlags & 0x400) == 0 && !v3->WaitBlock[3].SpareLong )
    goto LABEL_27;
LABEL_16:
  if ( (Flag & 1) == 0 )
    goto LABEL_18;
  ExpFastResourceLegacyRelease((ULONG_PTR)Resource);
LABEL_19:
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable++ == -1;
  if ( v7
    && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
