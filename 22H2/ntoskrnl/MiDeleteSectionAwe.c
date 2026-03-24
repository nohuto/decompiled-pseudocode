/*
 * XREFs of MiDeleteSectionAwe @ 0x14054BA48
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1406359B8 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1406A5E24 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D5E94 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D5EDC (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
