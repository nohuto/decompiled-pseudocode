/*
 * XREFs of x86BiosTranslateAddress @ 0x1403A3520
 * Callers:
 *     XmEmulateInterrupt @ 0x1403A24DC (XmEmulateInterrupt.c)
 *     XmPushStack @ 0x1403A2E08 (XmPushStack.c)
 *     XmPopStack @ 0x1403A2F5C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x1403A30B4 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403A340C (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x1403A34E0 (XmGetWordImmediate.c)
 *     x86BiosReadMemory @ 0x1403CBB60 (x86BiosReadMemory.c)
 *     XmGetStringAddress @ 0x1403CC31C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403CC390 (XmGetStringAddressRange.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     XmInitializeEmulator @ 0x1403D04EC (XmInitializeEmulator.c)
 *     x86BiosWriteMemory @ 0x1403D2040 (x86BiosWriteMemory.c)
 *     XmGetLongImmediate @ 0x1403D20CC (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403D75CC (XmGetOffsetAddress.c)
 *     XmIntOp @ 0x1405361F0 (XmIntOp.c)
 * Callees:
 *     <none>
 */

int *__fastcall x86BiosTranslateAddress(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx

  v2 = (a2 + 16 * a1) & 0xFFFFF;
  if ( v2 > 0x8FFFF && v2 - 655360 > 0x1FFFF )
    return (int *)(x86BiosIoMemory + v2);
  if ( v2 >= 0xA0000 )
  {
    v4 = x86BiosFrameBuffer;
    v6 = (char *)v2;
    if ( !x86BiosFrameBuffer )
      v4 = x86BiosIoMemory;
    return (int *)&v6[v4];
  }
  v4 = (unsigned __int16)(a2 + 16 * a1);
  v5 = HIWORD(v2);
  if ( v5 )
  {
    if ( v5 != 1 && v5 <= 3 && (unsigned int)v4 < x86BiosTransferLength )
      return (int *)(x86BiosTransferMemory + v4);
  }
  else if ( (unsigned int)v4 <= 0x800 )
  {
    v6 = (char *)&x86BiosLowMemory;
    return (int *)&v6[v4];
  }
  x86BiosScratchMemory = 0;
  return &x86BiosScratchMemory;
}
