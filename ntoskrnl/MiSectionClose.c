/*
 * XREFs of MiSectionClose @ 0x1407D6390
 * Callers:
 *     <none>
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 */

__int64 __fastcall MiSectionClose(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  v2 = MiSectionControlArea(a2);
  return MiRemoveSharedCommitNode(v2, v3, 0LL);
}
