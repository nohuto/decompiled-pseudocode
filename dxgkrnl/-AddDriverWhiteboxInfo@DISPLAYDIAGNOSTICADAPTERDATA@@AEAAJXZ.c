__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddDriverWhiteboxInfo(struct DXGADAPTER **this)
{
  struct DXGADAPTER *v2; // rdx
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp

  if ( !ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(*((ADAPTER_DISPLAY **)*this + 365)) )
    return 3221225659LL;
  v3 = DRIVERWHITEBOXINFO::CollectNonIntrusiveDriverData((DRIVERWHITEBOXINFO *)(this + 245), v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL, v3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CollectNonIntrusiveDriverData() failed with Status : 0x%I64x",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = DRIVERWHITEBOXINFO::CollectIntrusiveDriverData((DRIVERWHITEBOXINFO *)(this + 245), *this);
  v6 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CollectIntrusiveDriverData() failed with Status : 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v4 >= 0 || (int)v6 >= 0 )
    *((_BYTE *)this + 3248) = 1;
  else
    LODWORD(v4) = -1073741823;
  return (unsigned int)v4;
}
