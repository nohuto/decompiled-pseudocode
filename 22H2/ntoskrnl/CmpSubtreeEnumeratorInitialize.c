/*
 * XREFs of CmpSubtreeEnumeratorInitialize @ 0x14072B148
 * Callers:
 *     CmpPromoteSubtree @ 0x14072A0A8 (CmpPromoteSubtree.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x14067E190 (CmpInitializeKeyNodeStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorInitialize(__int64 a1)
{
  memset((void *)(a1 + 2), 0, 0x66uLL);
  *(_WORD *)a1 = -2;
  return CmpInitializeKeyNodeStack((char *)(a1 + 16));
}
