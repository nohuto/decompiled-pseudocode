/*
 * XREFs of MiFreeImageRetpolineContext @ 0x1407F5140
 * Callers:
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1407F5944 (MiCaptureRetpolineRelocationTables.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x140828D60 (MiCaptureBootDriverRetpolineInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageRetpolineContext(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[1] = 0LL;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[3] = 0LL;
  }
}
