__int64 WmipRegisterFirmwareProviders()
{
  __int64 result; // rax
  int v1; // [rsp+20h] [rbp-20h] BYREF
  char v2; // [rsp+24h] [rbp-1Ch]
  __int16 v3; // [rsp+25h] [rbp-1Bh]
  char v4; // [rsp+27h] [rbp-19h]
  __int64 (__fastcall *v5)(_DWORD *); // [rsp+28h] [rbp-18h]
  PDRIVER_OBJECT v6; // [rsp+30h] [rbp-10h]

  v1 = 1381190978;
  v3 = 0;
  v4 = 0;
  v2 = 1;
  v5 = WmipRawSMBiosTableHandler;
  v6 = PnpDriverObject;
  result = NtSetSystemInformation(0x4BuLL, (unsigned __int64)&v1, 24LL);
  if ( dword_140C316F0 == 1 )
  {
    v1 = 1179210317;
    v2 = 1;
    v5 = WmipFirmwareTableHandler;
    v6 = PnpDriverObject;
    return NtSetSystemInformation(0x4BuLL, (unsigned __int64)&v1, 24LL);
  }
  return result;
}
