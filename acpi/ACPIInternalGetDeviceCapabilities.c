/*
 * XREFs of ACPIInternalGetDeviceCapabilities @ 0x1C0087F60
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C0088CE8 (ACPIMatchHardwareAddress.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C00952EC (ACPISystemPowerQueryDeviceCapabilities.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008822C (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIInternalGetDeviceCapabilities(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  _QWORD v5[9]; // [rsp+20h] [rbp-58h] BYREF

  memset(v5, 0, sizeof(v5));
  LOWORD(v5[0]) = 2331;
  v5[1] = a2;
  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[2] = -1;
  a2[3] = -1;
  return ACPIInternalSendSynchronousIrp(DeviceObject);
}
