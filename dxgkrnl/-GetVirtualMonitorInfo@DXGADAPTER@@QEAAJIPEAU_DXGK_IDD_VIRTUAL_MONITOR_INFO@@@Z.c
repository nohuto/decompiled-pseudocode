__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax

  if ( (*((_DWORD *)this + 109) & 0x40000) != 0 )
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 275);
    if ( v4 )
      return v4(*((_QWORD *)this + 264), a2, a3);
  }
  WdLogSingleEntry2(2LL, this, -1073741822LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"GetVirtualMonitorInfo called on non-virtual adapter 0x%I64x, returning Status 0x%I64x",
    (__int64)this,
    -1073741822LL,
    0LL,
    0LL,
    0LL);
  return 3221225474LL;
}
