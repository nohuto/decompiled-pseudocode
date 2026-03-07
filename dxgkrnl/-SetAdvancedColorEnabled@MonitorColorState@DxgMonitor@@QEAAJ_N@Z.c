__int64 __fastcall DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(DxgMonitor::MonitorColorState *this, char a2)
{
  __int64 v5; // r9
  bool v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  DxgkIsConsoleSessionDispBrokerEnabled(&v6);
  if ( v6 )
  {
    WdLogSingleEntry1(2LL, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    *((_BYTE *)this + 384) = a2;
    if ( !(unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage()
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 80LL))(*(_QWORD *)this) )
    {
      LOBYTE(v5) = a2;
      (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
        *((_QWORD *)this + 1),
        4LL,
        L"AdvancedColorEnabled",
        v5);
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 3LL);
    return 0LL;
  }
}
