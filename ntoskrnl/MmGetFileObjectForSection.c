/*
 * XREFs of MmGetFileObjectForSection @ 0x1407F15D8
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140368300 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 */

unsigned __int64 __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u);
}
