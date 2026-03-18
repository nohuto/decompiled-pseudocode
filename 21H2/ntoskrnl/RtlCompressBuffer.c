/*
 * XREFs of RtlCompressBuffer @ 0x140244760
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14037A8BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14037FDA0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     EtwpFileModeCompress @ 0x1403B4AB0 (EtwpFileModeCompress.c)
 *     EtwpCompressBuffer @ 0x14063499C (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x1409B5F50 (RtlCompressChunks.c)
 *     EtwpWriteBufferCompressed @ 0x1409EDB30 (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
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
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_QWORD, PUCHAR, ULONG, PUCHAR, ULONG, ULONG, PULONG, PVOID))RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalCompressedSize,
           WorkSpace);
}
