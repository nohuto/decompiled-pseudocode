/*
 * XREFs of RtlDecompressBuffer @ 0x14045B4E0
 * Callers:
 *     RtlDecompressChunks @ 0x1409B6290 (RtlDecompressChunks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 5u )
    return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, _DWORD, PULONG, _QWORD))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
             UncompressedBuffer,
             UncompressedBufferSize,
             CompressedBuffer,
             CompressedBufferSize,
             0,
             FinalUncompressedSize,
             0LL);
  return -1073741217;
}
