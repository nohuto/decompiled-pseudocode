/*
 * XREFs of ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C0225574
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C0223D34 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@@@Z @ 0x1C02241A8 (-ConfigureVirtualTouchpad@VirtualTouchpadProcessor@@QEAAJPEAUVPTP_ID@@AEBUtagVIRTUAL_PTP_CONFIG@.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0225260 (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??1VPTPTouchpad@@QEAA@XZ @ 0x1C0223CDC (--1VPTPTouchpad@@QEAA@XZ.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1C0224D94 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     ?RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C0225508 (-RemoveRimDevice@VirtualTouchpadProcessor@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall VirtualTouchpadProcessor::RemoveTouchpad(VirtualTouchpadProcessor *this, struct VPTPTouchpad *a2)
{
  struct RawInputManagerDeviceObject *v3; // rdx
  VPTPTouchpad ***v4; // rcx

  v3 = (struct RawInputManagerDeviceObject *)*((_QWORD *)a2 + 4);
  if ( v3 )
  {
    VirtualTouchpadProcessor::RemoveRimDevice(this, v3);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  if ( !VPTPTouchpad::IsActive(a2) )
  {
    VPTPTouchpad::~VPTPTouchpad(v4);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
  }
}
