/*
 * XREFs of ZwFlushProcessWriteBuffers @ 0x140414130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFlushProcessWriteBuffers(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
