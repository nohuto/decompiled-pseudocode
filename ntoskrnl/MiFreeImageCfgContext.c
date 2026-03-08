/*
 * XREFs of MiFreeImageCfgContext @ 0x140369018
 * Callers:
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiCaptureImageCfgContext @ 0x1407F5190 (MiCaptureImageCfgContext.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageCfgContext(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
