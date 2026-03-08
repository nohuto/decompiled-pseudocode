/*
 * XREFs of ViCheckTag @ 0x140AC5514
 * Callers:
 *     ViCheckAdapterBuffers @ 0x140AC51E4 (ViCheckAdapterBuffers.c)
 *     ViCheckPadding @ 0x140AC5364 (ViCheckPadding.c)
 *     ViFreeMapRegistersToFile @ 0x140AC5C60 (ViFreeMapRegistersToFile.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140AC62F4 (ViHalPreprocessOptions.c)
 */

void __fastcall ViCheckTag(ULONG_PTR a1, unsigned int a2, int a3, char a4)
{
  ULONG_PTR v4; // rsi
  size_t v6; // rbx
  void *v9; // rbp
  const void *v10; // r12

  v4 = a2;
  v6 = a2;
  v9 = (void *)a1;
  v10 = (const void *)(a2 + a1);
  if ( (a4 & 1) != 0 )
  {
    v9 = (void *)(a1 - 8);
    if ( RtlCompareMemory((const void *)(a1 - 8), &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140C0DD0C,
        "Area before %x byte allocation at %p has been modified.",
        268435471,
        (const void *)1);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 1uLL, (unsigned int)v4, a1, byte_140C0DD0C);
    }
    v6 += 8LL;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( RtlCompareMemory(v10, &ViDmaVerifierTag, 8uLL) != 8 )
    {
      ViHalPreprocessOptions(
        byte_140C0DD10,
        "Area after %x byte allocation at %p has been modified.",
        268435471,
        (const void *)2);
      VfReportIssueWithOptions(0xE6u, 0xFuLL, 2uLL, v4, a1, byte_140C0DD10);
    }
    v6 += 8LL;
  }
  if ( a3 )
    memset(v9, 15, v6);
}
