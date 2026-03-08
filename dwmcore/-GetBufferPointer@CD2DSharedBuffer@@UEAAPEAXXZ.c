/*
 * XREFs of ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1801079F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CD2DSharedBuffer::GetBufferPointer(CD2DSharedBuffer *this)
{
  return (void *)*((_QWORD *)this + 2);
}
