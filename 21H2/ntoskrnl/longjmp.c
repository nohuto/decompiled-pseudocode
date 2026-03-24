/*
 * XREFs of longjmp @ 0x1403D0670
 * Callers:
 *     XmInOp @ 0x1403965D0 (XmInOp.c)
 *     XmOutOp @ 0x140396620 (XmOutOp.c)
 *     XmPushStack @ 0x140396D68 (XmPushStack.c)
 *     XmPopStack @ 0x140396EBC (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140397014 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x140397368 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140397440 (XmGetWordImmediate.c)
 *     XmGetStringAddress @ 0x1403C0DFC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403C0E70 (XmGetStringAddressRange.c)
 *     XmGroup45General @ 0x1403C38A0 (XmGroup45General.c)
 *     XmGetLongImmediate @ 0x1403C4ED4 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C920C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403C9420 (XmDivOp.c)
 *     XmEffectiveOffset @ 0x1404E52D0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x1404E5430 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E54B0 (XmGroup7General.c)
 *     XmLoadSegment @ 0x1404E56E0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x1404E6440 (XmEnterOp.c)
 *     XmHltOp @ 0x1404E64F0 (XmHltOp.c)
 *     XmBoundOp @ 0x1404E6BD0 (XmBoundOp.c)
 *     XmIllOp @ 0x1404E6CA0 (XmIllOp.c)
 *     XmIdivOp @ 0x1404E6EC0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E7078 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402B2030 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x1403F9BA0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
