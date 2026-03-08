/*
 * XREFs of MiStoreRundownWritesApc @ 0x14065A300
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiStoreDecrementOutstandingWrites @ 0x140659A2C (MiStoreDecrementOutstandingWrites.c)
 */

LONG __fastcall MiStoreRundownWritesApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1212);
  *(_QWORD *)(v3 + 1216) = a1;
  MiStoreDecrementOutstandingWrites(v3);
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
