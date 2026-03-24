/*
 * XREFs of ZwTerminateThread @ 0x1403FAE00
 * Callers:
 *     KiParkUmsThread @ 0x140525F20 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140588810 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408BD920 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
