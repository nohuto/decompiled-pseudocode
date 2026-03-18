/*
 * XREFs of ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C01DD330
 * Callers:
 *     <none>
 * Callees:
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F32F0 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F38C4 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  const struct CONTAINER_ID *v4; // r9
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 160) )
  {
    v6 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1736);
  }
  --*((_QWORD *)this + 160);
  if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 324)) )
  {
    v6 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 72),
      (struct DEVICEINFO *)3,
      (unsigned int)&v6,
      v4);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 72);
}
