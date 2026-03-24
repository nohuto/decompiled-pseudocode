/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14032CF6C
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140712CA8 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14094C704 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4EF30 << 12;
}
