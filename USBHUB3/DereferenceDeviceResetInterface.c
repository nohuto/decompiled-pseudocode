/*
 * XREFs of DereferenceDeviceResetInterface @ 0x1C0043E24
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C007CF20 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007DFC0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_RegisterPortPLDRCapability @ 0x1C0080B64 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_InvokePortPLDRRecovery @ 0x1C0081794 (HUBPDO_InvokePortPLDRRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

void *__fastcall DereferenceDeviceResetInterface(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD))a1[3];
  if ( v1 )
    v1(a1[1]);
  return memset(a1, 0, 0x50uLL);
}
