/*
 * XREFs of RtlCompressBuffer @ 0x180082F80
 * Callers:
 *     EtwpWriteBufferCompressed @ 0x180087E80 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine](
           CompressionFormatAndEngine & 0xFF00,
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalCompressedSize,
           WorkSpace);
}
