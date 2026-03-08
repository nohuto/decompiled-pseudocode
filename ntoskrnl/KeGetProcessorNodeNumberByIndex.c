/*
 * XREFs of KeGetProcessorNodeNumberByIndex @ 0x140353BBC
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1406B180C (PspRecheckThreadOptionalXStateFeatures.c)
 *     KeUserModeCallback @ 0x1407DA1F0 (KeUserModeCallback.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AB970 (PspEnableProcessOptionalXStateFeatures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetProcessorNodeNumberByIndex(int a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[a1] + 192) + 138LL);
}
