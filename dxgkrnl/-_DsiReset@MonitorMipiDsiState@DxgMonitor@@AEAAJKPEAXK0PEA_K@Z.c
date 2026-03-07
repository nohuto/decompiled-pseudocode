__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_DsiReset(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rbx
  unsigned __int64 *v10; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rbx

  v6 = a4;
  v8 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v10 = a6;
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  *v10 = 0LL;
  Feature_MipiDsi2__private_ReportDeviceUsage();
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled()
    || (v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12) < 0xC002)
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  v13 = 8LL;
  if ( (unsigned int)v8 < 8 )
  {
    v14 = v8;
LABEL_14:
    WdLogSingleEntry2(2LL, v13, v14);
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    v14 = v6;
    v13 = v8;
    goto LABEL_14;
  }
  if ( a3 != a5 )
    WdLogSingleEntry0(1LL);
  *v10 = v6;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&a5, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
  v16 = (*(int (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 112LL))(v15, a3);
  MUTEX_LOCK::~MUTEX_LOCK((DXGFASTMUTEX **)&a5);
  if ( (int)v16 < 0 )
    WdLogSingleEntry1(3LL, v16);
  return 0LL;
}
