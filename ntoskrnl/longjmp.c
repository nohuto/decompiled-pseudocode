/*
 * XREFs of longjmp @ 0x1403D2360
 * Callers:
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140395614 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x140395F88 (XmGetLongImmediate.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403A0290 (XmDivOp.c)
 *     XmOutOp @ 0x1403B3770 (XmOutOp.c)
 *     XmInOp @ 0x1403B38C0 (XmInOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
 *     XmPushStack @ 0x1403B4270 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B4350 (XmGetWordImmediate.c)
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 *     XmEffectiveOffset @ 0x1405307D0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140530900 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140530980 (XmGroup7General.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140531850 (XmEnterOp.c)
 *     XmHltOp @ 0x140531900 (XmHltOp.c)
 *     XmBoundOp @ 0x140531FE0 (XmBoundOp.c)
 *     XmIllOp @ 0x1405320B0 (XmIllOp.c)
 *     XmIdivOp @ 0x1405322D0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405324A8 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x1402DC470 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x140411B40 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
