/*
 * XREFs of MiFreeModWriterEntry @ 0x140212C5C
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     MiDeleteMappedMdls @ 0x140626E1C (MiDeleteMappedMdls.c)
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140212C98 (MiReleaseWriteInProgressCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFreeModWriterEntry(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a1[24];
  ExFreePoolWithTag(a1, 0);
  return MiReleaseWriteInProgressCharges(v2, 1LL, a2);
}
