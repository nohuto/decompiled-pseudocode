/*
 * XREFs of longjmp @ 0x1403CFF70
 * Callers:
 *     XmInOp @ 0x140395ED0 (XmInOp.c)
 *     XmOutOp @ 0x140395F20 (XmOutOp.c)
 *     XmPushStack @ 0x140396668 (XmPushStack.c)
 *     XmPopStack @ 0x1403967BC (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140396914 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140396C68 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140396D40 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403C0A5C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403C0AD0 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403C3500 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C4B34 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C8BDC (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C8D50 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404E5210 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404E5370 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E53F0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E5620 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E6380 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E6430 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E6B10 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E6BE0 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E6E00 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E6FB8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140309780 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F9220 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
