/*
 * XREFs of ZwTerminateThread @ 0x1403FA480
 * Callers:
 *     KiParkUmsThread @ 0x140525E60 (KiParkUmsThread.c)
 *     RtlAssert @ 0x140588750 (RtlAssert.c)
 *     KiSwapToUmsThread @ 0x1408BD970 (KiSwapToUmsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTerminateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
