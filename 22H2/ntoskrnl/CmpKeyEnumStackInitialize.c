/*
 * XREFs of CmpKeyEnumStackInitialize @ 0x140A24184
 * Callers:
 *     CmpEnumerateLayeredKey @ 0x140A164C4 (CmpEnumerateLayeredKey.c)
 *     CmpSubtreeEnumeratorStart @ 0x140A207E0 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x140A23664 (CmpGetSubKeyCountForKeyNodeStack.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26450 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     CmpInitializeKeyNodeStack @ 0x1407D21DC (CmpInitializeKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140A23EFC (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackInitialize(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x160uLL);
  CmpInitializeKeyNodeStack(a1 + 1);
  v2 = a1 + 11;
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
