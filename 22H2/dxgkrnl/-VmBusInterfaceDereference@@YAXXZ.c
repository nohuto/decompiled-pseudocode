/*
 * XREFs of ?VmBusInterfaceDereference@@YAXXZ @ 0x1C0380394
 * Callers:
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0361180 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 *     ?Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z @ 0x1C0366290 (-Initialize@DXGVMBUSCHANNEL@@IEAAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@E@Z.c)
 *     ?CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZPEAPEAU5@@Z @ 0x1C037233C (-CreateClientVmBusChannel@@YAJPEAXPEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHA.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x1C03726A4 (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 *     ?DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z @ 0x1C03732D8 (-DestroyVmBusChannel@@YAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028640 (memset.c)
 */

void VmBusInterfaceDereference(void)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v1; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGPUSHLOCK::AcquireExclusive((struct DXGGLOBAL *)((char *)Global + 896));
  if ( g_VgpuVmBusInterfaceRefCount )
  {
    --g_VgpuVmBusInterfaceRefCount;
    ((void (__fastcall *)(__int64))qword_1C0141EB8)(qword_1C0141EA8);
    if ( !g_VgpuVmBusInterfaceRefCount )
      memset(&g_VgpuVmBusInterface, 0, 0x318uLL);
  }
  v1 = DXGGLOBAL::GetGlobal();
  *((_QWORD *)v1 + 113) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v1 + 896, 0LL);
  KeLeaveCriticalRegion();
}
