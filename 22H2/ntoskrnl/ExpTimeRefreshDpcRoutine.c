/*
 * XREFs of ExpTimeRefreshDpcRoutine @ 0x1402F3120
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x1403D1490 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403EB464 (RtlpComputeEpilogueOffset.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine7 @ 0x140409690 (KiCustomAccessRoutine7.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall ExpTimeRefreshDpcRoutine(__int64 a1, volatile signed __int32 *a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD v8[58]; // [rsp+0h] [rbp-1D8h] BYREF

  v8[55] = v8;
  memset(&v8[42], 0, 0x60uLL);
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    LODWORD(v8[7]) = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v8[53] = a3;
    v8[50] = __ROL8__(a2, a3);
    v8[45] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine7(a2);
  }
  if ( _InterlockedIncrement(a2) == 1 )
    ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}
