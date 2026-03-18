/*
 * XREFs of ExSaAllocate @ 0x14022365C
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x1403D489C (ExpAllocateFannedOutPushLock.c)
 *     KeInitializeProcess @ 0x1406B66E8 (KeInitializeProcess.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409F0AAC (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExpSaAllocatorAllocate @ 0x1402236F0 (ExpSaAllocatorAllocate.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  struct _KTHREAD *v7; // rcx

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  v3 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v3 = ExSaPagedSlotAllocator;
  v4 = -1LL;
  if ( v3 )
  {
    if ( a1 <= 0x1000 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = ExpSaAllocatorAllocate(v3);
      v7 = KeGetCurrentThread();
      v4 = v6;
      if ( v7->SpecialApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  return v4;
}
