/*
 * XREFs of WheapAllocErrorRecord @ 0x1405BB87C
 * Callers:
 *     WheapReportBootError @ 0x1405BB0F4 (WheapReportBootError.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x1403BB038 (WheapInitializeErrorRecordWrapper.c)
 *     memset @ 0x140414300 (memset.c)
 *     WheapGetPreallocatedErrorRecord @ 0x1405BBD3C (WheapGetPreallocatedErrorRecord.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 PreallocatedErrorRecord; // rax

  v4 = *(_DWORD *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() > 2u )
  {
    PreallocatedErrorRecord = WheapGetPreallocatedErrorRecord(a1);
    v6 = PreallocatedErrorRecord;
    if ( PreallocatedErrorRecord )
    {
      *(_DWORD *)(PreallocatedErrorRecord + 24) = 1;
      goto LABEL_6;
    }
LABEL_7:
    *a2 = 0;
    return v6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, *(_DWORD *)(a1 + 36));
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_7;
  v7 = *a2;
  memset(PoolWithTag, 0, v7);
  WheapInitializeErrorRecordWrapper(v6, v7, a1);
LABEL_6:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
