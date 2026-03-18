/*
 * XREFs of MiDeleteCloneDescriptor @ 0x140663EB0
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x140663DBC (MiDecrementCloneBlockReference.c)
 *     MiDeleteInsertedCloneVads @ 0x140A48D28 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14028B210 (PsReturnProcessNonPagedPoolQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     MiDecrementCloneHeaderCount @ 0x140663E7C (MiDecrementCloneHeaderCount.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiDeleteCloneDescriptor(struct _KPROCESS *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24) + 32LL;
    v7 = *(_QWORD *)(v2 + 16);
    *(_QWORD *)(v7 + 24) = (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v5 + 2064), (PSLIST_ENTRY)v7);
    KeSetEvent((PRKEVENT)(v5 + 2040), 0, 0);
    MiDecrementCloneHeaderCount(v5);
    ExFreePoolWithTag((PVOID)v2, 0);
  }
  PsReturnProcessNonPagedPoolQuota(a1, *(_QWORD *)(a2 + 64));
  return RtlpInterlockedPushEntrySList(
           (PSLIST_HEADER)(a1[1].ActiveProcessors.StaticBitmap[28] + 352),
           (PSLIST_ENTRY)(a2 + 80));
}
