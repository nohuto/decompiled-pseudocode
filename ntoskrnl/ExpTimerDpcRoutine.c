/*
 * XREFs of ExpTimerDpcRoutine @ 0x1402FE790
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140250440 (KeSetCoalescableTimer.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     _local_unwind @ 0x1403D3990 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403ED6A8 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine0 @ 0x140422D40 (KiCustomAccessRoutine0.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall ExpTimerDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  int v8; // esi
  __int64 v9; // [rsp+0h] [rbp-1A8h] BYREF
  int v10; // [rsp+30h] [rbp-178h]
  _BYTE v11[89]; // [rsp+110h] [rbp-98h] BYREF
  __int64 *v12; // [rsp+180h] [rbp-28h]

  v12 = &v9;
  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)((DeferredContext >> 47) + 1) > 1 )
  {
    v10 = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    *(_QWORD *)&v11[81] = SystemArgument1;
    *(_QWORD *)&v11[1] = __ROL8__(DeferredContext, SystemArgument1);
    *(_QWORD *)&v11[73] = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine0(DeferredContext);
  }
  v8 = 0;
  KxAcquireSpinLock((PKSPIN_LOCK)(DeferredContext + 64));
  if ( (*(_BYTE *)(DeferredContext + 304) & 1) != 0 )
  {
    v8 = (unsigned __int8)KeInsertQueueApc(
                            DeferredContext + 72,
                            MEMORY[0xFFFFF78000000014],
                            (_DWORD *)HIDWORD(MEMORY[0xFFFFF78000000014]),
                            0) == 0;
    if ( *(_DWORD *)(DeferredContext + 240) )
    {
      if ( --v8 < 0 )
      {
        ObfReferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
        v8 = 0;
      }
      if ( (*(_BYTE *)(DeferredContext + 304) & 2) == 0
        && KeSetCoalescableTimer(
             (PKTIMER)DeferredContext,
             (LARGE_INTEGER)(-10000LL * *(int *)(DeferredContext + 240)),
             0,
             *(_DWORD *)(DeferredContext + 320),
             Dpc) )
      {
        ++v8;
      }
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)(DeferredContext + 64));
  if ( v8 )
    ObfDereferenceObjectWithTag((PVOID)DeferredContext, 0x746C6644u);
}
