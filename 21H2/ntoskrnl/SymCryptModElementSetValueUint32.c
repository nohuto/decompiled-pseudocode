/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x14040106C
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x1404080D0 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140408730 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassSetZero @ 0x14040A480 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140410C24 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x14040BCF0 (SymCryptFdefModElementSetValueUint32Generic.c)
 */

__int64 __fastcall SymCryptModElementSetValueUint32(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefModElementSetValueUint32Generic(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006960 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
