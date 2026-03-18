/*
 * XREFs of ??1VPTPTouchpad@@QEAA@XZ @ 0x1C01F2BEC
 * Callers:
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C01F4164 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1C01F3A84 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VPTPTouchpad::~VPTPTouchpad(VPTPTouchpad ***this)
{
  VPTPTouchpad **v1; // rdx
  VPTPTouchpad **v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = *this;
  if ( (*this)[1] != (VPTPTouchpad *)this || (v2 = this[1], *v2 != (VPTPTouchpad *)this) )
    __fastfail(3u);
  *v2 = (VPTPTouchpad *)v1;
  v1[1] = (VPTPTouchpad *)v2;
  if ( VPTPTouchpad::IsActive((VPTPTouchpad *)this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
}
