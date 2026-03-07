bool __fastcall UsbhExtPropDescSemaphorePresent(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rbx
  int PdoRegistryParameter; // eax
  int v4; // eax
  int v5; // ecx
  __int64 v7; // [rsp+30h] [rbp-51h]
  __int64 v8; // [rsp+30h] [rbp-51h]
  int v9; // [rsp+38h] [rbp-49h]
  int v10; // [rsp+38h] [rbp-49h]
  int v11; // [rsp+48h] [rbp-39h] BYREF
  int v12; // [rsp+4Ch] [rbp-35h] BYREF
  int Data; // [rsp+50h] [rbp-31h] BYREF
  WCHAR v14[12]; // [rsp+58h] [rbp-29h] BYREF
  WCHAR v15[16]; // [rsp+70h] [rbp-11h] BYREF
  WCHAR SourceString[24]; // [rsp+90h] [rbp+Fh] BYREF

  wcscpy(SourceString, L"ExtPropDescSemaphore");
  wcscpy(v14, L"RevisionId");
  wcscpy(v15, L"VendorRevision");
  Data = 0;
  v11 = 0;
  v12 = 0;
  v2 = PdoExt((__int64)DeviceObject);
  PdoRegistryParameter = UsbhGetPdoRegistryParameter(DeviceObject, v14, &v11, 4LL, 0LL, 0LL, 1);
  if ( (int)(PdoRegistryParameter + 0x80000000) >= 0
    && PdoRegistryParameter != -1073741772
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = PdoRegistryParameter;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_f1b4c9c59f9f315fbcaf54f6e2fa0cb0_Traceguids,
      v7);
  }
  LOBYTE(v9) = 1;
  v4 = UsbhGetPdoRegistryParameter(DeviceObject, v15, &v12, 4LL, 0LL, 0LL, v9);
  if ( (int)(v4 + 0x80000000) >= 0
    && v4 != -1073741772
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v8) = v4;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_f1b4c9c59f9f315fbcaf54f6e2fa0cb0_Traceguids,
      v8);
  }
  LOBYTE(v10) = 1;
  if ( (int)UsbhGetPdoRegistryParameter(DeviceObject, SourceString, &Data, 4LL, 0LL, 0LL, v10) >= 0
    && v11 == *((unsigned __int16 *)v2 + 706)
    && ((v2[706] & 0x400) == 0 && !v12
     || (v2[706] & 0x400) != 0 && v12 == *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL)) )
  {
    return 1;
  }
  Data = 1;
  if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, SourceString, 4u, &Data, 4u) < 0 )
    return 1;
  v11 = *((unsigned __int16 *)v2 + 706);
  if ( (int)UsbhSetPdoRegistryParameter(DeviceObject, v14, 4u, &v11, 4u) < 0 )
    return 1;
  if ( (v2[706] & 0x400) != 0 )
    v5 = *(unsigned __int16 *)(*((_QWORD *)v2 + 360) + 4LL);
  else
    v5 = 0;
  v12 = v5;
  return (int)UsbhSetPdoRegistryParameter(DeviceObject, v15, 4u, &v12, 4u) < 0;
}
