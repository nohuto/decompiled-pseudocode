/*
 * XREFs of MiDeletePageFileSectionNodes @ 0x1407CE050
 * Callers:
 *     MiSegmentDelete @ 0x1406B0954 (MiSegmentDelete.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14021BF50 (MiUpdateSystemProtoPtesTree.c)
 *     MiAweControlArea @ 0x1402A0D84 (MiAweControlArea.c)
 *     MiDeleteSectionAwe @ 0x1406499AC (MiDeleteSectionAwe.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
      MiUpdateSystemProtoPtesTree(v2 + 56, 0);
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
