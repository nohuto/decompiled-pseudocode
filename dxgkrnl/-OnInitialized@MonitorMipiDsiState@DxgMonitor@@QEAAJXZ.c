__int64 __fastcall DxgMonitor::MonitorMipiDsiState::OnInitialized(DxgMonitor::MonitorMipiDsiState *this)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx
  DXGFASTMUTEX *v6; // [rsp+38h] [rbp+10h] BYREF

  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( (unsigned __int8)ExIsManufacturingModeEnabled()
    && (v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >= 0xC002)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v6, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
    v5 = (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 64LL))(v4, (char *)this + 8);
    MUTEX_LOCK::~MUTEX_LOCK(&v6);
    if ( (int)v5 < 0 )
      WdLogSingleEntry1(3LL, v5);
    return (unsigned int)v5;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
}
