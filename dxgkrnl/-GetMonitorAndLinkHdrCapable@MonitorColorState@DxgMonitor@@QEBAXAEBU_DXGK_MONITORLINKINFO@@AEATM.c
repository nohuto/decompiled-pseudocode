void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        union MONITOR_AND_LINK_HDR_CAPS *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // esi
  int v9; // r9d
  BOOL v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  DXGK_MONITORLINKINFO_CAPABILITIES v15; // r9d
  int v16; // ebx
  BOOL v17; // esi
  unsigned int v18; // [rsp+40h] [rbp+8h] BYREF

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) < 2500 )
  {
    v15.0 = (struct _DXGK_MONITORLINKINFO_CAPABILITIES::$9E3BB2B9C51DA1466203AB97776F201E)a2->Capabilities;
    v16 = 4;
    v17 = (*(_BYTE *)&v15.0 & 4) != 0 && DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
    if ( (*(_WORD *)&v15.0 & 0x400) == 0 || !*((_BYTE *)this + 340) )
      v16 = 0;
    *(_DWORD *)a3 = v16 | ((v17 | *(_DWORD *)a3 & 0xFFFFFFFE) ^ (*((_BYTE *)&v15.0 + 1) ^ (unsigned __int8)(*(_BYTE *)a3 | v17)) & 2) & 0xFFFFFFFB;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 40LL))(v7, &v18);
    v8 = 1;
    v9 = (v18 >> 2) & 1;
    v10 = (v9 || (v18 & 8) != 0)
       && (*(_BYTE *)&a2->Capabilities.0 & 4) != 0
       && DxgMonitor::MonitorColorState::EdidSupportsHDR(this);
    v11 = v10 | *(_DWORD *)a3 & 0xFFFFFFFE;
    if ( v9 && (a2->Capabilities.Value & 0x200) != 0 )
      v12 = 2;
    else
      v12 = 0;
    v13 = v12 | v11 & 0xFFFFFFFD;
    if ( v9 && (a2->Capabilities.Value & 0x400) != 0 && *((_BYTE *)this + 340) )
      v14 = 4;
    else
      v14 = 0;
    *(_DWORD *)a3 = v14 | v13 & 0xFFFFFFFB;
    if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
    {
      if ( (v18 & 4) == 0 && (v18 & 8) == 0
        || (*(_BYTE *)&a2->Capabilities.0 & 4) == 0
        || (!(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this)
         || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 88LL))(*(_QWORD *)this))
        && !DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
      {
        v8 = 0;
      }
      *(_DWORD *)a3 = v8 | *(_DWORD *)a3 & 0xFFFFFFFE;
    }
  }
}
