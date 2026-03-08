/*
 * XREFs of PoFxIdleComponent @ 0x140306A10
 * Callers:
 *     PoFxIdleDevice @ 0x14020259C (PoFxIdleDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1402B90C0 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x140393C70 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1405E7180 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140306A50 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
