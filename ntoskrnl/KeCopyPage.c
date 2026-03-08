/*
 * XREFs of KeCopyPage @ 0x14041BC90
 * Callers:
 *     MiInitializeImageProtos @ 0x140213DD0 (MiInitializeImageProtos.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiCopyKstack @ 0x14062A6D0 (MiCopyKstack.c)
 *     MiSlowRotateCopy @ 0x140630B44 (MiSlowRotateCopy.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 *     MiCopyMemoryPagefileData @ 0x14065D548 (MiCopyMemoryPagefileData.c)
 *     MiRevertRelocatedImagePfn @ 0x14069F1D0 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x14069F890 (MiValidateSectionCreate.c)
 *     MxCopyPage @ 0x140B96330 (MxCopyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCopyPage(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3

  result = -4096LL;
  v3 = a2 + 4096;
  v4 = a1 + 4096;
  do
  {
    v5 = *(__m128i *)(v3 + result + 16);
    v6 = *(__m128i *)(v3 + result + 32);
    v7 = *(__m128i *)(v3 + result + 48);
    _mm_stream_si128((__m128i *)(v4 + result), *(__m128i *)(v3 + result));
    _mm_stream_si128((__m128i *)(v4 + result + 16), v5);
    _mm_stream_si128((__m128i *)(v4 + result + 32), v6);
    _mm_stream_si128((__m128i *)(v4 + result + 48), v7);
    result += 64LL;
  }
  while ( result );
  _mm_sfence();
  return result;
}
