__int64 __fastcall DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(DxgMonitor::MonitorColorState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // ebx
  _DXGK_COLORIMETRY v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD *)this;
  memset(&v6, 0, sizeof(v6));
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  v4 = (*(__int64 (__fastcall **)(__int64, _DXGK_COLORIMETRY *))(*(_QWORD *)v3 + 24LL))(v3, &v6);
  if ( v4 >= 0 )
    DxgMonitor::MonitorColorState::_SaveHDRParamDriverOverrides(this, &v6);
  return (unsigned int)v4;
}
