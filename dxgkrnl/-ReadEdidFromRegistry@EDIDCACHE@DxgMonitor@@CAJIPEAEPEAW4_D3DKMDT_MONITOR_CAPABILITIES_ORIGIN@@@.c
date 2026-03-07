__int64 __fastcall DxgMonitor::EDIDCACHE::ReadEdidFromRegistry(
        unsigned int a1,
        unsigned __int8 *a2,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  HANDLE v8; // rdx
  int v9; // eax
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v11; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+68h] [rbp-98h]
  const WCHAR *v15; // [rsp+70h] [rbp-90h]
  unsigned __int8 *v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  int v21; // [rsp+A0h] [rbp-60h]
  const WCHAR *v22; // [rsp+A8h] [rbp-58h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v23; // [rsp+B0h] [rbp-50h]
  int v24; // [rsp+B8h] [rbp-48h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+C8h] [rbp-38h]
  __int64 v27; // [rsp+D0h] [rbp-30h]
  int v28; // [rsp+D8h] [rbp-28h]
  __int128 v29; // [rsp+E0h] [rbp-20h]
  __int128 v30; // [rsp+F0h] [rbp-10h]
  __int64 v31; // [rsp+100h] [rbp+0h]

  Handle = 0LL;
  v6 = DxgMonitor::EDIDCACHE::OpenEdidRegistryForTarget(a1, 0x20019u, &Handle, 0LL);
  LODWORD(v7) = v6;
  if ( v6 >= 0 )
  {
    v8 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 221LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"InternalMonEdidHandle", 221LL, 0LL, 0LL, 0LL, 0LL);
      v8 = Handle;
    }
    v13 = 0LL;
    v20 = 0LL;
    v27 = 0LL;
    v28 = 0;
    v15 = L"EDID";
    v14 = 292;
    v22 = L"Origin";
    v23 = &v11;
    v25 = &v11;
    v21 = 292;
    v31 = 0LL;
    v11 = -1;
    *(_DWORD *)a2 = -128;
    v16 = a2;
    v17 = 50331651;
    v18 = a2;
    v19 = 128;
    v24 = 67108868;
    v26 = 4;
    v29 = 0LL;
    v30 = 0LL;
    v9 = RtlQueryRegistryValuesEx(0x40000000LL, v8, &v13, 0LL, 0LL);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( v11 != -1 && *(_DWORD *)a2 != -128 )
      {
        *a3 = v11;
LABEL_11:
        ZwClose(Handle);
        return (unsigned int)v7;
      }
      v7 = -1073741823LL;
    }
    WdLogSingleEntry3(3LL, v7, Handle, &v13);
    goto LABEL_11;
  }
  WdLogSingleEntry2(3LL, v6, a1);
  return (unsigned int)v7;
}
