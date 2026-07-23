/*
 * XREFs of RtlCrc32 @ 0x18007F2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc32Ctrl);
}
