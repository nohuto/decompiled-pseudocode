/*
 * XREFs of WheapAllocErrorRecord @ 0x14060E78C
 * Callers:
 *     WheapReportBootError @ 0x14060E01C (WheapReportBootError.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14037D79C (WheapInitializeErrorRecordWrapper.c)
 *     WheapGetPreallocatedErrorRecord @ 0x14060EBCC (WheapGetPreallocatedErrorRecord.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  __int64 Pool2; // rax
  __int64 v6; // r11
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
  Pool2 = ExAllocatePool2(64LL, v4, *(unsigned int *)(a1 + 36));
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_7;
  WheapInitializeErrorRecordWrapper(Pool2, *a2, a1);
LABEL_6:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
