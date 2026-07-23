/*
 * XREFs of EtwpReferenceStackLookasideList @ 0x140935970
 * Callers:
 *     EtwpEnableGuid @ 0x140715CA4 (EtwpEnableGuid.c)
 *     EtwpInitializeStackTracing @ 0x14093580C (EtwpInitializeStackTracing.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_SLIST_ENTRY *EtwpReferenceStackLookasideList()
{
  int v0; // ebx
  _SLIST_ENTRY *result; // rax

  v0 = 2 * KeNumberProcessors_0 * _InterlockedIncrement(&dword_140C53D80);
  do
  {
    result = (_SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x820uLL, 0x6C777445u);
    if ( !result )
      break;
    RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, result);
    result = (_SLIST_ENTRY *)(unsigned int)_InterlockedIncrement(&dword_140C53D84);
  }
  while ( (int)result < v0 );
  return result;
}
