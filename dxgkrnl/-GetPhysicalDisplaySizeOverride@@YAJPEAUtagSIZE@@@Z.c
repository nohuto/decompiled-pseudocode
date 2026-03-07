__int64 __fastcall GetPhysicalDisplaySizeOverride(struct tagSIZE *a1)
{
  LONG v3; // [rsp+50h] [rbp-B0h] BYREF
  LONG v4; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v5; // [rsp+60h] [rbp-A0h] BYREF
  int v6; // [rsp+68h] [rbp-98h]
  const wchar_t *v7; // [rsp+70h] [rbp-90h]
  LONG *v8; // [rsp+78h] [rbp-88h]
  int v9; // [rsp+80h] [rbp-80h]
  __int64 v10; // [rsp+88h] [rbp-78h]
  int v11; // [rsp+90h] [rbp-70h]
  __int64 v12; // [rsp+98h] [rbp-68h]
  int v13; // [rsp+A0h] [rbp-60h]
  const wchar_t *v14; // [rsp+A8h] [rbp-58h]
  LONG *v15; // [rsp+B0h] [rbp-50h]
  int v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+C0h] [rbp-40h]
  int v18; // [rsp+C8h] [rbp-38h]
  __int64 v19; // [rsp+D0h] [rbp-30h]
  int v20; // [rsp+D8h] [rbp-28h]
  __int128 v21; // [rsp+E0h] [rbp-20h]
  __int128 v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp+0h]

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 1205LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pPhysicalSizeOverride != NULL", 1205LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = 0;
  v6 = 292;
  v9 = 67108868;
  v13 = 292;
  v7 = L"Width";
  v16 = 67108868;
  v8 = &v3;
  v4 = 0;
  v14 = L"Height";
  v5 = 0LL;
  v15 = &v4;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(1LL, L"PhysicalDisplaySizeOverride", &v5, 0LL, 0LL) < 0 )
    return 3221226021LL;
  a1->cx = v3;
  a1->cy = v4;
  return 0LL;
}
