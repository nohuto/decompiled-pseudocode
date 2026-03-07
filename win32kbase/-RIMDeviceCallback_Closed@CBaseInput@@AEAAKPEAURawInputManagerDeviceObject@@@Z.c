__int64 __fastcall CBaseInput::RIMDeviceCallback_Closed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const struct CONTAINER_ID *v8; // r9
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 168) )
  {
    v10 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1764);
  }
  --*((_QWORD *)this + 168);
  Feature_InputVirtualization__private_ReportDeviceUsage();
  if ( isRootPartition(v5, v4, v6, v7) && CIVChannel::ContainerConnected(*((_DWORD *)this + 340)) )
  {
    v10 = 0;
    IVRootDeliver::PnP::SendRootPnp(
      (struct RawInputManagerDeviceObject *)((char *)a2 + 72),
      (struct DEVICEINFO *)3,
      (unsigned int)&v10,
      v8);
  }
  return (*(__int64 (__fastcall **)(CBaseInput *, char *))(*(_QWORD *)this + 96LL))(this, (char *)a2 + 72);
}
