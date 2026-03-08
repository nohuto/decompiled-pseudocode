/*
 * XREFs of MiDeletePageFileSectionNodes @ 0x1407F349C
 * Callers:
 *     MiSegmentDelete @ 0x1406A6FD4 (MiSegmentDelete.c)
 * Callees:
 *     MiAweControlArea @ 0x14034C968 (MiAweControlArea.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140368AE0 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteSectionAwe @ 0x140647390 (MiDeleteSectionAwe.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePageFileSectionNodes(__int64 a1)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1 + 128;
  do
  {
    if ( *(_QWORD *)(v2 + 8) )
    {
      MiUpdateSystemProtoPtesTree((unsigned __int64 *)(v2 + 56), 0);
      ExFreePoolWithTag(*(PVOID *)(v2 + 8), 0);
    }
    v2 = *(_QWORD *)(v2 + 16);
  }
  while ( v2 );
  result = MiAweControlArea(a1);
  if ( (_DWORD)result )
    return MiDeleteSectionAwe(v4);
  return result;
}
