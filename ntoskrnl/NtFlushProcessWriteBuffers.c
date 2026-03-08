/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1402373B0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402373CC (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0LL);
  return 0LL;
}
