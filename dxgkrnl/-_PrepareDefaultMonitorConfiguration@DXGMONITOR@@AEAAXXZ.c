void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  char v2; // al
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v3; // ecx
  int *v4; // rdi
  unsigned int *v5; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // [rsp+30h] [rbp-89h] BYREF
  int v8; // [rsp+34h] [rbp-85h] BYREF
  __int64 v9; // [rsp+40h] [rbp-79h] BYREF
  int v10; // [rsp+48h] [rbp-71h]
  const wchar_t *v11; // [rsp+50h] [rbp-69h]
  char *v12; // [rsp+58h] [rbp-61h]
  int v13; // [rsp+60h] [rbp-59h]
  int *v14; // [rsp+68h] [rbp-51h]
  int v15; // [rsp+70h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-41h]
  int v17; // [rsp+80h] [rbp-39h]
  const wchar_t *v18; // [rsp+88h] [rbp-31h]
  char *v19; // [rsp+90h] [rbp-29h]
  int v20; // [rsp+98h] [rbp-21h]
  int *v21; // [rsp+A0h] [rbp-19h]
  int v22; // [rsp+A8h] [rbp-11h]
  __int64 v23; // [rsp+B0h] [rbp-9h]
  int v24; // [rsp+B8h] [rbp-1h]
  __int128 v25; // [rsp+C0h] [rbp+7h]
  __int128 v26; // [rsp+D0h] [rbp+17h]
  __int64 v27; // [rsp+E0h] [rbp+27h]

  v7 = *((_DWORD *)this + 82);
  v2 = *((_BYTE *)this + 177);
  v3 = *((_DWORD *)this + 46);
  v8 = (v2 & 1) != 0 ? 3 : 0;
  if ( IsInternalVideoOutput(v3) )
  {
    v4 = (int *)((char *)this + 340);
    v5 = (unsigned int *)((char *)this + 332);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL),
                *((unsigned int *)this + 45),
                (char *)this + 332,
                (char *)this + 340) < 0 )
    {
      v9 = 0LL;
      v16 = 0LL;
      v23 = 0LL;
      v24 = 0;
      v11 = L"MonitorOrientation";
      v10 = 292;
      v14 = (int *)&v7;
      v13 = 67108868;
      v18 = L"DockedOrientation";
      v21 = &v8;
      v15 = 4;
      v17 = 292;
      v20 = 67108868;
      v22 = 4;
      v12 = (char *)this + 332;
      v19 = (char *)this + 340;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v9, 0LL, 0LL) < 0 )
      {
        *v5 = v7;
        *v4 = v8;
      }
    }
    v6 = *v5;
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this) )
    {
      WdLogSingleEntry1(2LL, v6);
      *v5 = v7;
    }
    if ( (unsigned int)*v4 > 3 )
    {
      WdLogSingleEntry1(2LL, (unsigned int)*v4);
      *v4 = v8;
    }
  }
  *((_DWORD *)this + 84) = *((_DWORD *)this + 83);
  *((_DWORD *)this + 86) = *((_DWORD *)this + 85);
}
