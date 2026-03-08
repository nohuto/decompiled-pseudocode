/*
 * XREFs of HalpBlkProcessorStartup @ 0x140B11010
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicInitializeLocalUnit @ 0x140B12FB0 (HalpBlkApicInitializeLocalUnit.c)
 *     HalpBlkMceInitialize @ 0x140B134F0 (HalpBlkMceInitialize.c)
 *     HalpBlkIdleLoop @ 0x140B13530 (HalpBlkIdleLoop.c)
 */

void __fastcall __noreturn HalpBlkProcessorStartup(unsigned __int64 a1)
{
  _disable();
  __writemsr(0xC0000101, a1);
  __writemsr(0xC0000102, a1);
  HalpBlkApicInitializeLocalUnit(3221225730LL, HIDWORD(a1));
  HalpBlkMceInitialize();
  _InterlockedIncrement64(MK_FP(__GS__, 16LL));
  HalpBlkIdleLoop();
}
