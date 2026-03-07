void __fastcall DXGGLOBAL::HdrPowerPolicyChangeCallout(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rbx
  const wchar_t *v3; // r9
  int v4; // eax
  _BYTE v5[16]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v6[10]; // [rsp+60h] [rbp-68h] BYREF

  v5[0] = 0;
  v1 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v5, 1);
  if ( v1 < 0 )
  {
    v2 = v1;
    WdLogSingleEntry1(2LL, v1);
    v3 = L"Failed to acquire session mode change lock exclusively (Status = 0x%I64x)";
LABEL_6:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, v2, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  if ( *(_DWORD *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 118) + 144LL) != -1 )
  {
    memset(v6, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v6[1]);
    v6[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v6[3]) = 63;
    LOBYTE(v6[6]) = -1;
    v4 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v6, 0x200000000uLL);
    if ( v4 >= 0 )
      goto LABEL_8;
    v2 = v4;
    WdLogSingleEntry1(2LL, v4);
    v3 = L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).";
    goto LABEL_6;
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) = 1;
LABEL_8:
  if ( v5[0] )
    DxgkReleaseSessionModeChangeLock();
}
