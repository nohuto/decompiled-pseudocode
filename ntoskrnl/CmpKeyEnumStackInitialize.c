/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140A21424
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140A13774 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A1DA80 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A20904 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407836E4 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140A2119C (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(char *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 8);
  v2 = a1 + 88;
  v3 = 2LL;
  do
  {
    result = CmpKeyEnumStackEntryInitialize(v2);
    v2 += 16;
    --v3;
  }
  while ( v3 );
  return result;
}
