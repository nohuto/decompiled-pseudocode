char __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  char v4; // bl
  ADAPTER_DISPLAY *v5; // rcx

  v4 = 1;
  if ( !*((_QWORD *)this + 365) )
  {
    WdLogSingleEntry1(1LL, 10367LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10367LL, 0LL, 0LL, 0LL, 0LL);
  }
  v5 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 365);
  if ( !v5 || !ADAPTER_DISPLAY::IsVidPnSourceActive(v5, a2) )
    return 0;
  return v4;
}
