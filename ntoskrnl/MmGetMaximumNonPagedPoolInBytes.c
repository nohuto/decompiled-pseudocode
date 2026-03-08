/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1402BED94
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140748750 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1409F5F20 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C695B0 << 12;
}
