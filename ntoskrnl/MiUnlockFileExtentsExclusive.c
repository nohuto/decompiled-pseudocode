/*
 * XREFs of MiUnlockFileExtentsExclusive @ 0x140A314E4
 * Callers:
 *     MiInsertCopyExtents @ 0x14063BA1C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063BFCC (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140A31150 (MiDeleteFileExtentList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char MiUnlockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65528, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65528);
  LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C65528);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v1 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v1->ApcState.ApcListHead[0].Flink != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
