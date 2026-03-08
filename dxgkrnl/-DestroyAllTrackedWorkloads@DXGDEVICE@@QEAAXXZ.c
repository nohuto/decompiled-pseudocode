/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C017BF2C
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C017B2AC (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B3FD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C0058EAC (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(DXGDEVICE *this)
{
  DXGTRACKEDWORKLOAD **v2; // rbx
  DXGTRACKEDWORKLOAD *v3; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 875LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 875LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGTRACKEDWORKLOAD **)((char *)this + 560);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (DXGTRACKEDWORKLOAD *)v2 )
      break;
    if ( v3 )
      DXGTRACKEDWORKLOAD::`scalar deleting destructor'(v3);
  }
}
