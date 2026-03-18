/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x1C001E9F8
 * Callers:
 *     Interrupter_PrepareInterrupter @ 0x1C007279C (Interrupter_PrepareInterrupter.c)
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1C0079700 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_ReleaseInterrupter @ 0x1C007A08C (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E7A4 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
