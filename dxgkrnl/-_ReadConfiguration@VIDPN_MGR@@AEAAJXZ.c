__int64 __fastcall VIDPN_MGR::_ReadConfiguration(VIDPN_MGR *this)
{
  int RegistryValues; // eax
  int v3; // edi
  unsigned int v4; // ecx
  bool v5; // al
  _DWORD *v6; // rdi
  int v7; // eax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v10[3]; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  const wchar_t *v13; // [rsp+58h] [rbp-B0h]
  _DWORD *v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  _DWORD *v16; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  int v19; // [rsp+88h] [rbp-80h]
  const wchar_t *v20; // [rsp+90h] [rbp-78h]
  char *v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+A0h] [rbp-68h]
  char *v23; // [rsp+A8h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-58h]
  __int64 v25; // [rsp+B8h] [rbp-50h]
  int v26; // [rsp+C0h] [rbp-48h]
  __int128 v27; // [rsp+C8h] [rbp-40h]
  __int128 v28; // [rsp+D8h] [rbp-30h]
  __int64 v29; // [rsp+E8h] [rbp-20h]
  _QWORD v30[22]; // [rsp+F8h] [rbp-10h] BYREF

  if ( !VIDPN_MGR::_BadMonitorSourceModeDiagnosibility )
  {
    v9 = 2;
    memset(v30, 0, 0xA8uLL);
    LODWORD(v30[1]) = 288;
    LODWORD(v30[4]) = 0x4000000;
    v30[2] = L"BadMonitorModeDiag";
    LODWORD(v30[11]) = 0x4000000;
    v30[3] = &v9;
    v30[5] = 0LL;
    v30[9] = L"AssertOnDdiViolation";
    LODWORD(v30[6]) = 0;
    v30[10] = &g_DmmAssertOnDdiViolation;
    v30[7] = 0LL;
    LODWORD(v30[8]) = 288;
    v30[12] = 0LL;
    LODWORD(v30[13]) = 0;
    RegistryValues = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\DMM", v30, 0LL, 0LL);
    v3 = RegistryValues;
    if ( RegistryValues >= 0 )
    {
      v4 = v9;
    }
    else
    {
      WdLogSingleEntry1(7LL, RegistryValues);
      if ( v3 != -1073741772 )
        WdLogSingleEntry0(1LL);
      v4 = 2;
      v9 = 2;
    }
    if ( v4 == 1 || v4 == 2 )
      VIDPN_MGR::_BadMonitorSourceModeDiagnosibility = v4;
    else
      WdLogSingleEntry1(2LL, v4);
  }
  v9 = 0;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
              L"AllowUnspecifiedVSync",
              &v9,
              4LL,
              2) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedVSync = v9 != 0;
  else
    WdLogSingleEntry0(7LL);
  v9 = 0;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
              L"AllowUnspecifiedHSync",
              &v9,
              4LL,
              2) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedHSync = v9 != 0;
  else
    WdLogSingleEntry0(7LL);
  v9 = 0;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
              L"AllowUnspecifiedPixelRate",
              &v9,
              4LL,
              2) >= 0 )
    VIDPN_MGR::_bAllowUnspecifiedPixelRate = v9 != 0;
  else
    WdLogSingleEntry0(7LL);
  v9 = 0;
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 216LL),
              L"ForceDualViewBehavior",
              &v9,
              4LL,
              2) >= 0 )
  {
    v5 = v9 != 0;
  }
  else
  {
    WdLogSingleEntry0(7LL);
    v5 = 0;
  }
  *((_BYTE *)this + 520) = v5;
  v6 = (_DWORD *)((char *)this + 544);
  v10[0] = 1000;
  LODWORD(v12) = 288;
  LODWORD(v15) = 67108868;
  v19 = 288;
  v13 = L"RapidHPDTime";
  v22 = 67108868;
  v14 = v10;
  *((_DWORD *)this + 136) = 5;
  v16 = v10;
  v11 = 0LL;
  v20 = L"RapidHPDThresholdCount";
  LODWORD(v17) = 4;
  v29 = 0LL;
  v18 = 0LL;
  v21 = (char *)this + 544;
  v23 = (char *)this + 544;
  v24 = 4;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v11, 0LL, 0LL);
  v7 = v10[0];
  if ( v10[0] > 0xEA60u )
    v7 = 60000;
  v10[0] = v7;
  *((_DWORD *)this + 135) = 10000 * v7 / KeQueryTimeIncrement();
  if ( *v6 == 1 )
  {
    *v6 = 0;
  }
  else if ( *v6 > 0x20u )
  {
    *v6 = 32;
  }
  if ( (unsigned int)Feature_45195632__private_IsEnabledDeviceUsage() )
    DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates = 1;
  return 0LL;
}
