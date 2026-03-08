/*
 * XREFs of IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140557CD0
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x14094A8B4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 */

char IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure()
{
  char result; // al
  int v1; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v1 = -1073741801;
  result = IopLiveDumpIsTracingEnabled();
  if ( result )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v1;
    return EtwWriteEx(
             IopLiveDumpEtwRegHandle,
             &LIVEDUMP_EVENT_SIZING_WORKFLOW_BUFFER_ALLOCATION_FROM_VM_MEMORY_PARTITION_FAILURE,
             0LL,
             0,
             0LL,
             0LL,
             1u,
             &UserData);
  }
  return result;
}
