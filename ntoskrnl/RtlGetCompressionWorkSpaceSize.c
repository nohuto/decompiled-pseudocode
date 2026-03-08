/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x14035AEA0
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x14035A528 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     SmDecompressBuffer @ 0x14035AD38 (SmDecompressBuffer.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403A1440 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x1403AF1D8 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x140985824 (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x1409EA65C (EtwpInitializeCompressedWriter.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
