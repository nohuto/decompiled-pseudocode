/*
 * XREFs of MiReleaseKernelCfgLock @ 0x140A44124
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A43EBC (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

char MiReleaseKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  $C71981A45BEB2B45F82C232A7085991E *v1; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65938, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65938);
  LOBYTE(v1) = KeAbPostRelease((ULONG_PTR)&qword_140C65938);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v1 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v1->ApcState.ApcListHead[0].Flink != v1 )
      LOBYTE(v1) = KiCheckForKernelApcDelivery();
  }
  return (char)v1;
}
