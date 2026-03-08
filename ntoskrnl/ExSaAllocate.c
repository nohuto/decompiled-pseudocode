/*
 * XREFs of ExSaAllocate @ 0x1402962FC
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x1403CF30C (ExpAllocateFannedOutPushLock.c)
 *     KeInitializeProcess @ 0x14070A0C8 (KeInitializeProcess.c)
 *     EtwpCovSampCaptureContextStart @ 0x1409EDC1C (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     ExpSaAllocatorAllocate @ 0x140296390 (ExpSaAllocatorAllocate.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(unsigned int a1, unsigned int a2)
{
  ULONG_PTR v3; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *v10; // rcx

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
      v10 = KeGetCurrentThread();
      v4 = v6;
      if ( v10->SpecialApcDisable++ == -1
        && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
      {
        KiCheckForKernelApcDelivery(v10, v7, v8, v9);
      }
    }
  }
  return v4;
}
