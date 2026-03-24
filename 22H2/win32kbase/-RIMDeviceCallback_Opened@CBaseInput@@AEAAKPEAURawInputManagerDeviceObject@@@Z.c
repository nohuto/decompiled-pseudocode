/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B57C0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C0042A98 (isRootPartition.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00CD53C (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC050 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v2; // rdi
  const struct CONTAINER_ID *v4; // r9
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 155);
  v2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 88);
  Feature_InputVirtualization__private_ReportDeviceUsage();
  if ( isRootPartition() && *((_DWORD *)this + 314) )
  {
    v6 = 0;
    IVRootDeliver::PnP::SendRootPnp(v2, (struct DEVICEINFO *)2, (unsigned int)&v6, v4);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v2);
}
