/*
 * XREFs of ObCreateObject @ 0x140709D30
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     KiAllocatePrcbThread @ 0x140371F98 (KiAllocatePrcbThread.c)
 *     ExCreateDpcEvent @ 0x140609B00 (ExCreateDpcEvent.c)
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     PspAllocatePartition @ 0x140855B00 (PspAllocatePartition.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 *     MiSectionInitialization @ 0x140B6D268 (MiSectionInitialization.c)
 * Callees:
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall ObCreateObject(int a1, int a2, int a3, int a4)
{
  return ObCreateObjectEx(a1, a2, a3, a4);
}
