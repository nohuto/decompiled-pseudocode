/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C018029C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0180200 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x1C019E7A0 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rcx
  NTSTATUS DevicePropertyData; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  ULONG RequiredSize; // [rsp+70h] [rbp+30h] BYREF

  RequiredSize = 0;
  Type = 0;
  v3 = *((unsigned int *)this + 112);
  Data = v3;
  if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v3, a2);
    WdLogEvent5_WdAssertion(v9);
    LODWORD(v3) = *((_DWORD *)this + 112);
  }
  if ( *((_DWORD *)this + 113) != (_DWORD)v3 )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *((PDEVICE_OBJECT *)this + 7),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v7 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, v5) + 24) = this;
    return 0LL;
  }
  if ( DevicePropertyData < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = v7;
    WdLogEvent5_WdError(v10);
    return (unsigned int)v7;
  }
  if ( RequiredSize != 4 || Type != 7 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v12[3] = Type;
    v13 = RequiredSize;
    v12[5] = this;
    v12[6] = -1073741823LL;
    v12[4] = v13;
    goto LABEL_23;
  }
  switch ( Data )
  {
    case 0u:
      v11 = 0;
LABEL_20:
      Data = v11;
      if ( DXGMONITOR::_ValidateMonitorOrientation(this, v11) )
      {
        *((_DWORD *)this + 113) = v11;
        *((_DWORD *)this + 114) = v11;
        return 0LL;
      }
      break;
    case 0x5Au:
      v11 = 1;
      goto LABEL_20;
    case 0xB4u:
      v11 = 2;
      goto LABEL_20;
    case 0x10Eu:
      v11 = 3;
      goto LABEL_20;
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
  v12[3] = Data;
  v12[4] = this;
  v12[5] = -1073741823LL;
LABEL_23:
  WdLogEvent5_WdError(v12);
  return 3221225473LL;
}
