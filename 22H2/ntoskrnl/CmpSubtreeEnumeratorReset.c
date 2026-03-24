/*
 * XREFs of CmpSubtreeEnumeratorReset @ 0x1408767C8
 * Callers:
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 * Callees:
 *     CmpKeyEnumStackReset @ 0x14072A90C (CmpKeyEnumStackReset.c)
 *     CmpResetKeyNodeStack @ 0x14072A96C (CmpResetKeyNodeStack.c)
 */

void __fastcall CmpSubtreeEnumeratorReset(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi

  v2 = 0LL;
  v3 = 512LL;
  do
  {
    CmpKeyEnumStackReset(v2 + *(_QWORD *)(a1 + 96) + 56LL);
    v2 += 408LL;
    --v3;
  }
  while ( v3 );
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_WORD *)a1 = -2;
  CmpResetKeyNodeStack((__int16 *)(a1 + 16));
}
