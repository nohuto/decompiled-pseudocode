/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x1407D5468
 * Callers:
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  dword_140C53D80 = 0;
  dword_140C53D84 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
