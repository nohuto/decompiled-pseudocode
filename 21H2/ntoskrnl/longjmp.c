/*
 * XREFs of longjmp @ 0x1403DF970
 * Callers:
 *     XmInOp @ 0x1403A2670 (XmInOp.c)
 *     XmOutOp @ 0x1403A26C0 (XmOutOp.c)
 *     XmPushStack @ 0x1403A2E08 (XmPushStack.c)
 *     XmPopStack @ 0x1403A2F5C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403A340C (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403A34E0 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403CC31C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403CC390 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403D0E30 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403D20CC (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403D75CC (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403D8160 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x140534FB0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140535110 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140535190 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1405353C0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140536120 (XmEnterOp.c)
 *     XmHltOp @ 0x1405361D0 (XmHltOp.c)
 *     XmBoundOp @ 0x1405368B0 (XmBoundOp.c)
 *     XmIllOp @ 0x140536980 (XmIllOp.c)
 *     XmIdivOp @ 0x140536BA0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140536D58 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140236890 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x14041AF90 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
