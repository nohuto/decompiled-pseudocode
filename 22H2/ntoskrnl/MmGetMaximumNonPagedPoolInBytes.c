/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140370D74
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1407F7AA8 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1409F8DB0 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C69A30 << 12;
}
