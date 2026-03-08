/*
 * XREFs of SymCryptModSub @ 0x1403F3E84
 * Callers:
 *     SymCryptTwistedEdwardsAdd @ 0x1403F9E40 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1403FAD2C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSub(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400064A8 + (*a1 & 0x380)))(a1, a2);
}
