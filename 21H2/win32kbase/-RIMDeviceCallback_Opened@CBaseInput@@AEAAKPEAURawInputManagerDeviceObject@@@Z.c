/*
 * XREFs of ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD00
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Opened(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP *v2; // rdi
  const struct CONTAINER_ID *v5; // r9
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF

  ++*((_QWORD *)this + 157);
  v2 = (struct RawInputManagerDeviceObject *)((char *)a2 + 88);
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_reporting,
    16291462LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
  {
    v6 = 0;
    IVRootDeliver::PnP::SendRootPnp(v2, (struct DEVICEINFO *)2, (unsigned int)&v6, v5);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, IVRootDeliver::PnP *))(*(_QWORD *)this + 88LL))(this, v2);
}
