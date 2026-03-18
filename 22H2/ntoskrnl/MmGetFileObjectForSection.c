/*
 * XREFs of MmGetFileObjectForSection @ 0x14076C710
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x140305100 (FsRtlCreateSectionForDataScan.c)
 * Callees:
 *     MiSectionControlArea @ 0x14029F760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1402A22D0 (MiReferenceControlAreaFileWithTag.c)
 */

unsigned __int64 __fastcall MmGetFileObjectForSection(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = MiSectionControlArea(a1);
  return MiReferenceControlAreaFileWithTag(v1, 0x746C6644u);
}
