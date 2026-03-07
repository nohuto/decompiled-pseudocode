NTSTATUS __stdcall RtlReserveChunk(
        USHORT CompressionFormat,
        PUCHAR *CompressedBuffer,
        PUCHAR EndOfCompressedBufferPlus1,
        PUCHAR *ChunkBuffer,
        ULONG ChunkSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 5u )
    return ((__int64 (__fastcall *)(PUCHAR *, PUCHAR, PUCHAR *, _QWORD))RtlReserveChunkProcs[(unsigned __int8)CompressionFormat])(
             CompressedBuffer,
             EndOfCompressedBufferPlus1,
             ChunkBuffer,
             ChunkSize);
  return -1073741217;
}
