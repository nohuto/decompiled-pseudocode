/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C01FD958
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C01FD8C8 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C021A550 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this)
{
  unsigned int v1; // eax
  __int64 v3; // rsi
  NTSTATUS DevicePropertyData; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((_DWORD *)this + 82);
  RequiredSize = 0;
  v3 = 1LL;
  Type = 0;
  Data = v1;
  if ( !*(_BYTE *)(*((_QWORD *)this + 25) + 16LL) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 83) != *((_DWORD *)this + 82) )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 25) + 8LL),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v9 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5, v7, v8) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData >= 0 )
  {
    if ( RequiredSize != 4 || Type != 7 )
    {
      v9 = -1073741823;
      WdLogSingleEntry4(2LL, Type, RequiredSize, this, -1073741823LL);
      return v9;
    }
    if ( Data )
    {
      if ( Data == 90 )
      {
        LODWORD(v12) = 1;
      }
      else
      {
        if ( Data == 180 )
        {
          v12 = 2LL;
        }
        else
        {
          if ( Data != 270 )
          {
            v11 = Data;
LABEL_17:
            v9 = -1073741823;
            WdLogSingleEntry3(2LL, v11, this, -1073741823LL);
            return v9;
          }
          v12 = 3LL;
        }
        v3 = v12;
      }
    }
    else
    {
      LODWORD(v12) = 0;
      v3 = 0LL;
    }
    Data = v12;
    if ( DXGMONITOR::_ValidateMonitorOrientation(this, v12) )
    {
      *((_DWORD *)this + 83) = v12;
      *((_DWORD *)this + 84) = v12;
      return 0LL;
    }
    v11 = v3;
    goto LABEL_17;
  }
  WdLogSingleEntry2(2LL, this, DevicePropertyData);
  return v9;
}
