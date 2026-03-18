/*
 * XREFs of SymCryptModElementSetValueUint32 @ 0x1403F912C
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEcpointTransform @ 0x1403FEE04 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsSetZero @ 0x140400190 (SymCryptTwistedEdwardsSetZero.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassSetZero @ 0x140402510 (SymCryptShortWeierstrassSetZero.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140408BF4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementSetValueUint32Generic @ 0x140403D80 (SymCryptFdefModElementSetValueUint32Generic.c)
 */

__int64 __fastcall SymCryptModElementSetValueUint32(int a1, _DWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefModElementSetValueUint32Generic(a1, (_DWORD)a2, a3, a4, a5);
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_1400064D0 + (*a2 & 0x380)))(
           a2,
           a3,
           a4,
           a5);
}
