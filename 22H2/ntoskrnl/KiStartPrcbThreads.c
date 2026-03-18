/*
 * XREFs of KiStartPrcbThreads @ 0x140382F00
 * Callers:
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 * Callees:
 *     KiStartPrcbThread @ 0x140383070 (KiStartPrcbThread.c)
 */

__int64 __fastcall KiStartPrcbThreads(__int64 a1)
{
  return KiStartPrcbThread(*(_QWORD *)(a1 + 13112), a1);
}
