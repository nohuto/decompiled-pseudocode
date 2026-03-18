/*
 * XREFs of ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F40F8
 * Callers:
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C01F30A0 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C01F4164 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveRimDevice(
        VirtualTouchpadProcessor *this,
        struct RawInputManagerDeviceObject *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = *((_QWORD *)a2 + 53);
  RIMLockExclusive(v2 + 104);
  RIMIDERemoveInjectionDevice((__int64)a2, v4, v5);
  *(_QWORD *)(v2 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 104, 0LL);
  KeLeaveCriticalRegion();
  ObfDereferenceObject(a2);
}
