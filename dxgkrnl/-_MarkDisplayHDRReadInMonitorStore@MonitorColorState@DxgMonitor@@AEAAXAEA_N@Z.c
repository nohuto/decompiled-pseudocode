void __fastcall DxgMonitor::MonitorColorState::_MarkDisplayHDRReadInMonitorStore(
        DxgMonitor::MonitorColorState *this,
        bool *a2)
{
  char v4; // al
  __int64 v5; // r9

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
         *((_QWORD *)this + 1),
         2LL,
         L"DisplayHdrLevelNotified");
  *a2 = v4;
  if ( !v4 )
  {
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"DisplayHdrLevelNotified",
      v5);
  }
}
