__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CollectDisplayAdapterDiagData(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  NTSTATUS v5; // esi
  _BYTE OutputBuffer[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a2 )
    return 3221225485LL;
  *((_QWORD *)this + 1) = *(_QWORD *)((char *)a2 + 404);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 103);
  *((_BYTE *)this + 20) = DXGADAPTER::IsBddFallbackDriver(a2);
  memset(OutputBuffer, 0, 0x4CuLL);
  v5 = ZwPowerInformation(SystemPowerCapabilities, 0LL, 0, OutputBuffer, 0x4Cu);
  if ( v5 >= 0 )
  {
    *((_BYTE *)this + 3504) = OutputBuffer[2] != 0;
    *((_BYTE *)this + 3505) = *((_BYTE *)DXGGLOBAL::GetGlobal() + 304760);
    *((_BYTE *)this + 3506) = DpiIsLastLidStateOpen() != 0;
  }
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(this, (ADAPTER_DISPLAY **)a2);
  DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnTargetInfo(this, a2);
  if ( DISPLAYDIAGNOSTICADAPTERDATA::AddDMMSegmentBuffer(this, a2) < 0 )
    *((_BYTE *)this + 56) = 0;
  Feature_DriverWhiteboxData__private_ReportDeviceUsage();
  if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo((struct DXGADAPTER **)this) < 0 )
    *((_BYTE *)this + 3248) = 0;
  if ( *((_BYTE *)this + 21) )
  {
    Feature_DriverBlackboxData__private_ReportDeviceUsage();
    if ( (int)DISPLAYDIAGNOSTICADAPTERDATA::AddDriverBlackboxInfo(this) < 0 )
      *((_BYTE *)this + 3488) = 0;
  }
  return (unsigned int)v5;
}
