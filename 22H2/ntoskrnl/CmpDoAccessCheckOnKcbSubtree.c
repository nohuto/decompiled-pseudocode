/*
 * XREFs of CmpDoAccessCheckOnKcbSubtree @ 0x140871AEC
 * Callers:
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14072A620 (CmpDoAccessCheckOnLayeredSubtree.c)
 */

__int64 __fastcall CmpDoAccessCheckOnKcbSubtree(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4)
{
  return CmpDoAccessCheckOnLayeredSubtree(a1, a2, 0LL, a3, a4, 1);
}
