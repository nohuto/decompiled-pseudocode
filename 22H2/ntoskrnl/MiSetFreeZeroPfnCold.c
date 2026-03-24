/*
 * XREFs of MiSetFreeZeroPfnCold @ 0x1403AC2B0
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140231A80 (MiDemoteLocalLargePage.c)
 *     MiFreeLargePageMemory @ 0x14027ECD4 (MiFreeLargePageMemory.c)
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x1402840B4 (MiGetLargePage.c)
 *     MiLargePageFreeToZero @ 0x1402843C0 (MiLargePageFreeToZero.c)
 *     MiEnableNewPfns @ 0x14052DFA0 (MiEnableNewPfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiSetFreeZeroPfnCold(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = MiUpdatePageFileHighInPte(*(_QWORD *)(a1 + 16), -(__int64)(a2 != 0) & 0xFFFFFFFDLL);
  *(_QWORD *)(v3 + 16) = result;
  return result;
}
