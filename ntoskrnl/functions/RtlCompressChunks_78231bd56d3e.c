NTSTATUS __stdcall RtlCompressChunks(
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PCOMPRESSED_DATA_INFO CompressedDataInfo,
        ULONG CompressedDataInfoLength,
        PVOID WorkSpace)
{
  PCOMPRESSED_DATA_INFO v7; // r12
  NTSTATUS v8; // ebx
  UCHAR *v10; // rdx
  ULONG UncompressedChunkSize; // esi
  COMPRESSED_DATA_INFO *CompressedChunkSizes; // r13
  ULONG v13; // r14d
  __int64 v15; // rdi
  NTSTATUS v16; // eax
  ULONG v17; // ecx
  PUCHAR Src; // [rsp+80h] [rbp+8h]
  ULONG FinalCompressedSize; // [rsp+88h] [rbp+10h] BYREF

  Src = UncompressedBuffer;
  v7 = CompressedDataInfo;
  v8 = 0;
  FinalCompressedSize = 0;
  v10 = UncompressedBuffer;
  UncompressedChunkSize = 1 << CompressedDataInfo->ChunkShift;
  CompressedChunkSizes = (COMPRESSED_DATA_INFO *)CompressedDataInfo->CompressedChunkSizes;
  v13 = UncompressedBufferSize - (UncompressedBufferSize >> 4);
  CompressedDataInfo->NumberOfChunks = 0;
  CompressedDataInfo = (PCOMPRESSED_DATA_INFO)v7->CompressedChunkSizes;
  while ( 1 )
  {
    v15 = UncompressedBufferSize;
    if ( UncompressedBufferSize >= UncompressedChunkSize )
      v15 = UncompressedChunkSize;
    v16 = RtlCompressBuffer(
            v7->CompressionFormatAndEngine,
            v10,
            v15,
            CompressedBuffer,
            v13,
            UncompressedChunkSize,
            &FinalCompressedSize,
            WorkSpace);
    if ( v16 == 279 )
    {
      v17 = 0;
      FinalCompressedSize = 0;
    }
    else if ( v16 >= 0 )
    {
      v17 = FinalCompressedSize;
    }
    else
    {
      if ( v13 < UncompressedChunkSize )
        return -1073741789;
      memmove(CompressedBuffer, Src, (unsigned int)v15);
      if ( UncompressedChunkSize > (unsigned int)v15 )
        memset(&CompressedBuffer[v15], 0, UncompressedChunkSize - (unsigned int)v15);
      CompressedChunkSizes = CompressedDataInfo;
      v17 = UncompressedChunkSize;
      FinalCompressedSize = UncompressedChunkSize;
    }
    *(_DWORD *)&CompressedChunkSizes->CompressionFormatAndEngine = v17;
    CompressedChunkSizes = (COMPRESSED_DATA_INFO *)((char *)CompressedChunkSizes + 4);
    ++v7->NumberOfChunks;
    v10 = &Src[(unsigned int)v15];
    CompressedDataInfo = CompressedChunkSizes;
    Src = v10;
    if ( (unsigned int)v15 > UncompressedBufferSize )
      break;
    v13 -= v17;
    CompressedBuffer += v17;
    UncompressedBufferSize -= v15;
    if ( !UncompressedBufferSize )
      return v8;
  }
  return -1073741246;
}
