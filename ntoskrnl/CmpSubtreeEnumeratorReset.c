/*
 * XREFs of CmpSubtreeEnumeratorReset @ 0x140A1DA20
 * Callers:
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 * Callees:
 *     CmpResetKeyNodeStack @ 0x140A1D48C (CmpResetKeyNodeStack.c)
 *     CmpKeyEnumStackReset @ 0x140A2152C (CmpKeyEnumStackReset.c)
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
