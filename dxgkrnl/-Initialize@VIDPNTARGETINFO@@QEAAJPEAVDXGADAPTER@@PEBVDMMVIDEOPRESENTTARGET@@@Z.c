__int64 __fastcall VIDPNTARGETINFO::Initialize(
        VIDPNTARGETINFO *this,
        struct DXGADAPTER *a2,
        const struct DMMVIDEOPRESENTTARGET *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 IsMonitorConnected; // al
  unsigned int v9; // edx
  bool v10; // al
  __int64 v11; // rcx
  unsigned __int8 v13; // [rsp+68h] [rbp+10h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry1(1LL, 1632LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
      1632LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_DWORD *)this = *((_DWORD *)a3 + 6);
  IsMonitorConnected = DMMVIDEOPRESENTTARGET::IsMonitorConnected(a3, (VIDPNTARGETINFO *)((char *)this + 8), v6, v7);
  v9 = *(_DWORD *)this;
  v13 = 0;
  *((_BYTE *)this + 4) = IsMonitorConnected != 0;
  *((_DWORD *)this + 3) = *((_DWORD *)a3 + 23);
  DmmIsTargetInClientVidPnTopology(a2, v9, &v13);
  *((_BYTE *)this + 5) = v13 != 0;
  v10 = IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a3 + 20));
  *((_BYTE *)this + 6) = v10;
  if ( v10 )
  {
    v11 = *((_QWORD *)a3 + 14);
    v14 = 0;
    if ( (int)MonitorGetLidStateFromMonitor(v11, &v14) >= 0 )
      *((_BYTE *)this + 7) = v14;
  }
  MonitorGetCachedApiGammaRampForDiagnostics(*((_QWORD *)a3 + 14), (char *)this + 16);
  return 0LL;
}
