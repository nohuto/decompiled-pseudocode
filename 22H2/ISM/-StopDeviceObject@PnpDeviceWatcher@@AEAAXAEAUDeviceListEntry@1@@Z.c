/*
 * XREFs of ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x18009FA38
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x180026C90 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 *     ?Shutdown@PnpDeviceWatcher@@QEAAXXZ @ 0x18009F6B8 (-Shutdown@PnpDeviceWatcher@@QEAAXXZ.c)
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x18009F758 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x18009FA38 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 * Callees:
 *     ?OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z @ 0x18009F130 (-OnLampArrayRemoved@LampArrayRawInputProvider@@QEAAXPEAVPnpDevice@@@Z.c)
 *     ?StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z @ 0x18009FA38 (-StopDeviceObject@PnpDeviceWatcher@@AEAAXAEAUDeviceListEntry@1@@Z.c)
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800A06BC (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 */

void __fastcall PnpDeviceWatcher::StopDeviceObject(
        PnpDeviceWatcher *this,
        struct PnpDeviceWatcher::DeviceListEntry *a2)
{
  volatile __int32 *v4; // rcx
  struct PnpDeviceWatcher::DeviceListEntry *i; // rbx

  if ( *(_DWORD *)(*((_QWORD *)a2 + 2) + 116LL) != 3 )
  {
    v4 = (volatile __int32 *)*((_QWORD *)a2 + 2);
    _InterlockedExchange(v4 + 29, 3);
    PnpDevice::CloseInterface((PnpDevice *)v4);
    for ( i = (struct PnpDeviceWatcher::DeviceListEntry *)*((_QWORD *)this + 7);
          i != (PnpDeviceWatcher *)((char *)this + 56);
          i = *(struct PnpDeviceWatcher::DeviceListEntry **)i )
    {
      if ( *(_QWORD *)(*((_QWORD *)i + 2) + 16LL) == *((_QWORD *)a2 + 2) )
        PnpDeviceWatcher::StopDeviceObject(this, i);
    }
    if ( *(_QWORD *)this && *((_BYTE *)a2 + 24) )
      LampArrayRawInputProvider::OnLampArrayRemoved(*(LampArrayRawInputProvider **)this, *((struct PnpDevice **)a2 + 2));
  }
}
