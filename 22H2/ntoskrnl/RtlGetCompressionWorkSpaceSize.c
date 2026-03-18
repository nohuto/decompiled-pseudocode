/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1402F5920
 * Callers:
 *     SmDecompressBuffer @ 0x1402F57B0 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1403435F0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A61B4 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x1403B3EC8 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x1409888D4 (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x1409ED4FC (EtwpInitializeCompressedWriter.c)
 *     sub_140B1A730 @ 0x140B1A730 (sub_140B1A730.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 5u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_WORD, PULONG, PULONG))RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
