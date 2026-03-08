/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C02E42F8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0331570 (DxgkDestroyOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C00487F0 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY ***a2)
{
  struct DXGOVERLAY **v3; // rcx
  struct DXGOVERLAY **v4; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 4046LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 4046LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = *a2;
  if ( (*a2)[1] != (struct DXGOVERLAY *)a2 || (v4 = a2[1], *v4 != (struct DXGOVERLAY *)a2) )
    __fastfail(3u);
  *v4 = (struct DXGOVERLAY *)v3;
  v3[1] = (struct DXGOVERLAY *)v4;
  DXGOVERLAY::`scalar deleting destructor'((DXGOVERLAY *)a2);
}
