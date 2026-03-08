/*
 * XREFs of x86BiosTranslateAddress @ 0x1403B9030
 * Callers:
 *     x86BiosReadMemory @ 0x1403947F0 (x86BiosReadMemory.c)
 *     XmGetStringAddress @ 0x14039559C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x140395614 (XmGetStringAddressRange.c)
 *     XmGetLongImmediate @ 0x140395F88 (XmGetLongImmediate.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     XmInitializeEmulator @ 0x14039A878 (XmInitializeEmulator.c)
 *     x86BiosWriteMemory @ 0x14039BB60 (x86BiosWriteMemory.c)
 *     XmGetOffsetAddress @ 0x14039F39C (XmGetOffsetAddress.c)
 *     XmEvaluateAddressSpecifier @ 0x1403B3F0C (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 *     XmPopStack @ 0x1403B4154 (XmPopStack.c)
 *     XmPushStack @ 0x1403B4270 (XmPushStack.c)
 *     XmGetWordImmediate @ 0x1403B4350 (XmGetWordImmediate.c)
 *     XmEmulateInterrupt @ 0x1403B84AC (XmEmulateInterrupt.c)
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 *     XmIntOp @ 0x140531920 (XmIntOp.c)
 * Callees:
 *     <none>
 */

int *__fastcall x86BiosTranslateAddress(unsigned __int16 a1, unsigned __int16 a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rax
  unsigned int v5; // r8d
  char *v6; // rcx
  unsigned int v7; // r8d

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
    v7 = v5 - 1;
    if ( v7 && v7 - 1 <= 1 && (unsigned int)v4 < x86BiosTransferLength )
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
