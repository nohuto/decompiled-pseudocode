char __fastcall PipMigrateResetDeviceCallback(__int64 a1, const wchar_t *a2)
{
  int v4; // eax
  int v6; // [rsp+50h] [rbp-10h] BYREF
  int v7; // [rsp+54h] [rbp-Ch] BYREF
  int v8; // [rsp+58h] [rbp-8h] BYREF

  v6 = 0;
  v7 = 0;
  if ( wcsicmp(a2, L"HTREE\\ROOT\\0") )
  {
    v8 = 4;
    if ( (int)CmGetDeviceRegProp(a1, (__int64)a2, 0LL, 11, (__int64)&v7, (__int64)&v6, (__int64)&v8, 0) >= 0
      && v7 == 4
      && v8 == 4 )
    {
      v4 = v6;
    }
    else
    {
      v4 = 0;
      v6 = 0;
    }
    if ( (v4 & 0x20) != 0
      || (v6 = v4 | 0x20, (int)CmSetDeviceRegProp(a1, (__int64)a2, 0LL, 0xBu, 4u, (__int64)&v6, 4u, 0) >= 0) )
    {
      PnpSetObjectProperty(a1, (__int64)a2, 1u, 0LL, 0LL, (__int64)DEVPKEY_Device_MigrationRank, 0, 0LL, 0, 0);
    }
  }
  return 1;
}
