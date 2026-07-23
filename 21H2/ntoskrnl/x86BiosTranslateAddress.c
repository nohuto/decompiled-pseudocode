/*
 * XREFs of x86BiosTranslateAddress @ 0x140397CA0
 * Callers:
 *     XmEmulateInterrupt @ 0x14039658C (XmEmulateInterrupt.c)
 *     XmPushStack @ 0x140396EB8 (XmPushStack.c)
 *     XmPopStack @ 0x14039700C (XmPopStack.c)
 *     XmEvaluateAddressSpecifier @ 0x140397164 (XmEvaluateAddressSpecifier.c)
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmGetWordImmediate @ 0x140397590 (XmGetWordImmediate.c)
 *     x86BiosReadMemory @ 0x1403BF840 (x86BiosReadMemory.c)
 *     XmGetStringAddress @ 0x1403C122C (XmGetStringAddress.c)
 *     XmGetStringAddressRange @ 0x1403C12A0 (XmGetStringAddressRange.c)
 *     x86BiosWriteMemory @ 0x1403C4E50 (x86BiosWriteMemory.c)
 *     HalInitializeBios @ 0x1403C4EE0 (HalInitializeBios.c)
 *     XmInitializeEmulator @ 0x1403C524C (XmInitializeEmulator.c)
 *     XmGetLongImmediate @ 0x1403C5304 (XmGetLongImmediate.c)
 *     XmGetOffsetAddress @ 0x1403C93AC (XmGetOffsetAddress.c)
 *     XmIntOp @ 0x1404E6750 (XmIntOp.c)
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
