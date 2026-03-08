/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140861A64
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C6B070 = 0;
  dword_140C6B074 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
