/*
 * XREFs of KiStartPrcbThreads @ 0x14037F410
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 */

__int64 __fastcall KiStartPrcbThreads(__int64 a1)
{
  return KiStartPrcbThread(*(_QWORD *)(a1 + 13112), a1);
}
