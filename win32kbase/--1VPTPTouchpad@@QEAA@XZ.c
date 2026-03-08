/*
 * XREFs of ??1VPTPTouchpad@@QEAA@XZ @ 0x1C0223CDC
 * Callers:
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C0225574 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1C0224D94 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 */

void __fastcall VPTPTouchpad::~VPTPTouchpad(VPTPTouchpad ***this)
{
  VPTPTouchpad **v1; // rdx
  VPTPTouchpad **v2; // rax

  v1 = *this;
  if ( (*this)[1] != (VPTPTouchpad *)this || (v2 = this[1], *v2 != (VPTPTouchpad *)this) )
    __fastfail(3u);
  *v2 = (VPTPTouchpad *)v1;
  v1[1] = (VPTPTouchpad *)v2;
  if ( VPTPTouchpad::IsActive((VPTPTouchpad *)this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 104);
}
