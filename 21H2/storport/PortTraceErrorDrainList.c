/*
 * XREFs of PortTraceErrorDrainList @ 0x1C005A7D4
 * Callers:
 *     PortTraceErrorWritePacket @ 0x1C005A864 (PortTraceErrorWritePacket.c)
 *     PortpErrorDrainListDpc @ 0x1C005A8D0 (PortpErrorDrainListDpc.c)
 * Callees:
 *     memmove @ 0x1C0020280 (memmove.c)
 */

PSLIST_ENTRY __fastcall PortTraceErrorDrainList(PVOID IoObject, PSLIST_HEADER ListHead)
{
  union _SLIST_HEADER *v4; // rcx
  PVOID ErrorLogEntry; // rax
  void *v6; // rdi
  PSLIST_ENTRY result; // rax
  __int64 v8; // rbx

  v4 = ListHead;
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v4);
    v8 = (__int64)result;
    if ( !result )
      break;
    ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, BYTE4(result[1].Next));
    v6 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      memmove(ErrorLogEntry, (const void *)(v8 + 32), *(unsigned int *)(v8 + 20));
      IoWriteErrorLogEntry(v6);
    }
    v4 = ListHead;
    _InterlockedExchange((volatile __int32 *)(v8 + 16), 0);
  }
  return result;
}
