/*
 * XREFs of ObCreateObject @ 0x1406B6350
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     KiAllocatePrcbThread @ 0x1403771E8 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x14060BF50 (ExCreateDpcEvent.c)
 *     PspAllocateProcess @ 0x1406B442C (PspAllocateProcess.c)
 *     PspAllocatePartition @ 0x14085A080 (PspAllocatePartition.c)
 *     CmpCreateRegistryRoot @ 0x140B39780 (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B41264 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140B71584 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x140730870 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
