__int64 __fastcall EnableDisableDeviceTreeRegionSpace(__int64 a1, unsigned int a2, char a3)
{
  bool v3; // zf
  int v7; // edx
  int v8; // r8d
  char *i; // rax
  char *v10; // rbx
  __int64 v11; // r8
  _QWORD v13[3]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+80h] [rbp-18h]
  int v17; // [rsp+84h] [rbp-14h]

  v17 = 0;
  v3 = *(_DWORD *)(a1 + 368) == 3;
  v14 = 0LL;
  if ( v3 )
  {
    if ( a2 < 0x1F )
      v7 = 1 << a2;
    else
      v7 = 0x80000000;
    if ( (v7 & *(_DWORD *)(a1 + 668)) != 0
      && (int)EnableDisableDeviceRegionSpace(a1, a2, a3) < 0
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_sdqD(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)"disable", v8, 14);
    }
    v13[1] = 0LL;
    v13[0] = a1 + 800;
    v15 = 816LL;
    v13[2] = &AcpiDeviceTreeLock;
    v16 = 1;
    for ( i = ACPIExtListStartEnum((__int64)v13); ; i = ACPIExtListEnumNext((__int64)v13) )
    {
      v10 = i;
      if ( !ACPIExtListTestElement((__int64)v13, 1) )
        break;
      LOBYTE(v11) = a3;
      EnableDisableDeviceTreeRegionSpace(v10, a2, v11);
    }
  }
  return 0LL;
}
