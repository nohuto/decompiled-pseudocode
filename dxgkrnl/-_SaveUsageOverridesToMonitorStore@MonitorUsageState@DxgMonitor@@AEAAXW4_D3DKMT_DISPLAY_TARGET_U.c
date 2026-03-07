__int64 __fastcall DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r9

  LOBYTE(a4) = a2 == 1;
  (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**(_QWORD **)(a1 + 8) + 152LL))(
    *(_QWORD *)(a1 + 8),
    4LL,
    L"HMDDevicePresent",
    a4);
  LOBYTE(v6) = a2 == 2;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**(_QWORD **)(a1 + 8) + 152LL))(
           *(_QWORD *)(a1 + 8),
           4LL,
           L"SpecialUseDevicePresent",
           v6);
}
