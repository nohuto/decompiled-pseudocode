/*
 * XREFs of MiDeleteSectionAwe @ 0x1406499AC
 * Callers:
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1407CE050 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x140863600 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140A41AB8 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140A41B00 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
