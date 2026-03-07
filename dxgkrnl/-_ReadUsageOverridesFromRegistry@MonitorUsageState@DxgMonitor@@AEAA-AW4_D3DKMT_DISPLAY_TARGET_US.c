__int64 __fastcall DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry(__int64 a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**(_QWORD **)(a1 + 8) + 56LL))(
         *(_QWORD *)(a1 + 8),
         3LL,
         L"HMDDevicePresent") )
  {
    return 1LL;
  }
  else
  {
    return (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**(_QWORD **)(a1 + 8) + 56LL))(
             *(_QWORD *)(a1 + 8),
             3LL,
             L"SpecialUseDevicePresent") != 0
         ? 2
         : 0;
  }
}
