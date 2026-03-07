BOOL __stdcall EngQuerySystemAttribute(ENG_SYSTEM_ATTRIBUTE CapNum, PDWORD pCapability)
{
  __int32 v3; // ecx
  DWORD v4; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // [rsp+20h] [rbp-68h] BYREF
  int v10; // [rsp+28h] [rbp-60h]
  _BYTE SystemInformation[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = CapNum - 1;
  if ( !v3 )
  {
    v9 = 0LL;
    v10 = 0;
    if ( ZwQuerySystemInformation(SystemProcessorInformation, &v9, 0xCu, 0LL) >= 0 )
    {
      v6 = v10 & 0x100 | 0x2000;
      if ( (v10 & 0x2000) == 0 )
        v6 = v10 & 0x100;
      v7 = v6 | 0x4000;
      if ( (v10 & 0x4000) == 0 )
        v7 = v6;
      v8 = v7 | 0x10000;
      if ( (v10 & 0x10000) == 0 )
        v8 = v7;
      v4 = v8 | 0x80000;
      if ( (v10 & 0x80000) == 0 )
        v4 = v8;
      goto LABEL_15;
    }
    return 0;
  }
  if ( v3 != 1 )
    return 0;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0 )
    return 0;
  v4 = SystemInformation[56];
LABEL_15:
  *pCapability = v4;
  return 1;
}
