/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0088EA0
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C007B02C (isRootPartition.c)
 *     Feature_InputVirtualization__private_ReportDeviceUsage @ 0x1C00E01B0 (Feature_InputVirtualization__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C02272BC (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C0228560 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const struct CONTAINER_ID *v9; // r9
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 168);
  v2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 72);
  Feature_InputVirtualization__private_ReportDeviceUsage();
  if ( isRootPartition(v5, v4, v6, v7) && CIVChannel::ContainerConnected(*((_DWORD *)this + 340)) )
  {
    v10 = 0;
    IVRootDeliver::PnP::SendRootPnp(v2, (struct DEVICEINFO *)2, (unsigned int)&v10, v9);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v2);
}
