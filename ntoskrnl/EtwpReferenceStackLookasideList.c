/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x1409E5D6C
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E5CE4 (EtwpInitializeClassicStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

struct _SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  struct _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C6B070);
  do
  {
    result = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, 2080LL, 1819767877LL);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (struct _SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C6B074);
  }
  while ( (int)result < v0 );
  return result;
}
