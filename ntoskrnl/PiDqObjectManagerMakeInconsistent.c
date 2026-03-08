/*
 * XREFs of PiDqObjectManagerMakeInconsistent @ 0x140959518
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406CC6A0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PiDqObjectManagerMakeInconsistent(__int64 a1)
{
  char v2; // di
  int v3; // r8d

  v2 = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v3 = *(_DWORD *)(a1 + 228);
  if ( (v3 & 2) == 0 && *(_QWORD *)(a1 + 192) != a1 + 192 )
  {
    *(_DWORD *)(a1 + 228) = v3 | 2;
    if ( (v3 & 1) == 0 )
    {
      v2 = 1;
      *(_DWORD *)(a1 + 228) = v3 | 3;
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 104));
  if ( v2 )
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 160), NormalWorkQueue);
}
