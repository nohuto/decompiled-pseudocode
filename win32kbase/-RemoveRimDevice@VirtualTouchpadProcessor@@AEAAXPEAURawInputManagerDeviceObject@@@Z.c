/*
 * XREFs of ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0225508
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C02241A8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C0225574 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveRimDevice(
        VirtualTouchpadProcessor *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 51);
  RIMLockExclusive(v2 + 104);
  RIMIDERemoveInjectionDevice((__int64)a2);
  *(_QWORD *)(v2 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(a2);
}
