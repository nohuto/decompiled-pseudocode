/*
 * XREFs of longjmp @ 0x1403D7880
 * Callers:
 *     XmGetStringAddress @ 0x140398FFC (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140399074 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x1403999E8 (XmGetLongImmediate.c)
 *     XmGroup45General @ 0x14039C7B0 (XmGroup45General.c)
 *     XmGetOffsetAddress @ 0x1403A497C (XmGetOffsetAddress.c)
 *     XmDivOp @ 0x1403A57B0 (XmDivOp.c)
 *     XmOutOp @ 0x1403B8430 (XmOutOp.c)
 *     XmInOp @ 0x1403B8580 (XmInOp.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B8BCC (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B8DB4 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B8E14 (XmPopStack.c)
 *     XmPushStack @ 0x1403B8F30 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B9010 (XmGetWordImmediate.c)
 *     XmEmulateStream @ 0x1403BDE80 (XmEmulateStream.c)
 *     XmEffectiveOffset @ 0x140532CA0 (XmEffectiveOffset.c)
 *     XmGeneralRegister @ 0x140532DD0 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140532E50 (XmGroup7General.c)
 *     XmLoadSegment @ 0x140533080 (XmLoadSegment.c)
 *     XmEnterOp @ 0x140533D20 (XmEnterOp.c)
 *     XmHltOp @ 0x140533DD0 (XmHltOp.c)
 *     XmBoundOp @ 0x1405344B0 (XmBoundOp.c)
 *     XmIllOp @ 0x140534580 (XmIllOp.c)
 *     XmIdivOp @ 0x1405347A0 (XmIdivOp.c)
 *     XmEvaluateIndexSpecifier @ 0x140534978 (XmEvaluateIndexSpecifier.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140346450 (KeCheckStackAndTargetAddress.c)
 *     __longjmp_internal @ 0x140419ED0 (__longjmp_internal.c)
 */

void __cdecl __noreturn longjmp(jmp_buf Buf, int Value)
{
  KeCheckStackAndTargetAddress(Buf[5].Part[0], Buf[1].Part[0]);
  _longjmp_internal(Buf, (unsigned int)Value);
}
