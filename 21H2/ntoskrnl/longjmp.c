/*
 * XREFs of longjmp @ 0x1403D07E0
 * Callers:
 *     XmInOp @ 0x140396720 (XmInOp.c)
 *     XmOutOp @ 0x140396770 (XmOutOp.c)
 *     XmPushStack @ 0x140396EB8 (XmPushStack.c)
 *     XmPopStack @ 0x14039700C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140397590 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403C122C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403C12A0 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C5304 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C95C0 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404E5510 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404E5670 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E56F0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E6680 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E6730 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E6E10 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E6EE0 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E7100 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E72B8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402301E0 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F9D80 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
