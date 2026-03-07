__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *BugCheckParameter4; // rsi
  int v7; // edi
  __int64 DeviceExtension; // r15
  int v9; // r14d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  void *v15; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h] BYREF
  PVOID v17; // [rsp+68h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+C8h] [rbp+48h] BYREF
  int v20; // [rsp+D0h] [rbp+50h] BYREF
  int v21; // [rsp+D8h] [rbp+58h] BYREF

  *(_OWORD *)BugCheckParameter3 = 0LL;
  v20 = 0;
  BugCheckParameter4 = 0LL;
  v21 = 0;
  v19 = 0;
  v17 = 0LL;
  P = 0LL;
  v7 = -1073741823;
  v15 = 0LL;
  *a3 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = ACPIGet(DeviceExtension, 0x5352435Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v17, (__int64)&v20);
  if ( a2 )
    v10 = ACPIGet(DeviceExtension, 0x5352505Fu, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v21);
  else
    v10 = -1073741772;
  if ( v9 < 0 )
  {
    if ( v10 < 0 )
    {
      if ( v10 == -1073741772 )
      {
        if ( v9 == -1073741772 )
          return 0;
        v7 = v9;
      }
      else
      {
        v7 = v10;
      }
      goto LABEL_28;
    }
  }
  else
  {
    v7 = -1073741772;
    if ( v10 < 0 )
      goto LABEL_10;
  }
  if ( P )
  {
    v7 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)P, 0, (__int64)&v15);
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    BugCheckParameter4 = v15;
  }
  if ( v7 >= 0 )
  {
LABEL_11:
    if ( !(unsigned __int8)AcpiCheckSecureDevice(DeviceExtension) )
    {
LABEL_24:
      *a3 = BugCheckParameter4;
      BugCheckParameter4 = 0LL;
      goto LABEL_25;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
    if ( v12 )
    {
      v7 = ACPIQueryDeviceBiosNameEx(a1, 1, (struct _UNICODE_STRING *)BugCheckParameter3);
      if ( v7 < 0 )
        goto LABEL_25;
      if ( (unsigned __int8)AcpiSearchSdevTable(v12, BugCheckParameter3, &v19) )
      {
        v13 = PnpiValidateSdevResources(v12, v19, BugCheckParameter4);
        v7 = v13;
        if ( v13 < 0 )
          KeBugCheckEx(0xA5u, 0x1000EuLL, v13, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        goto LABEL_24;
      }
    }
    v7 = -1072431079;
LABEL_25:
    if ( v9 >= 0 && v17 )
      ExFreePoolWithTag(v17, 0);
    goto LABEL_28;
  }
  if ( v9 >= 0 )
  {
LABEL_10:
    v11 = PnpDeviceBiosResourcesToNtResources(
            DeviceExtension,
            (__int64)v17,
            (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
            (__int64)&v15);
    BugCheckParameter4 = v15;
    v7 = v11;
    if ( v11 < 0 )
      goto LABEL_25;
    goto LABEL_11;
  }
LABEL_28:
  if ( BugCheckParameter4 )
    ExFreePoolWithTag(BugCheckParameter4, 0);
  return (unsigned int)v7;
}
