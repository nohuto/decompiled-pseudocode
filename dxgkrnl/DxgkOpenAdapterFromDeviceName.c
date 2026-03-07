__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rcx
  __int128 v3; // xmm1
  WCHAR *v4; // rdx
  bool v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  WCHAR *v8; // r8
  int v9; // r11d
  __int64 v10; // r10
  WCHAR v11; // r9
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v14; // rdi
  int DeviceObjectPointer; // ebx
  __int64 v16; // r8
  int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // eax
  _DWORD *v22; // rcx
  _QWORD *v23; // rcx
  int v24; // [rsp+50h] [rbp-298h] BYREF
  int v25; // [rsp+54h] [rbp-294h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-290h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-288h] BYREF
  _BYTE v28[24]; // [rsp+68h] [rbp-280h] BYREF
  WCHAR *v29; // [rsp+80h] [rbp-268h]
  __int64 v30; // [rsp+88h] [rbp-260h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-258h] BYREF
  WCHAR *v32; // [rsp+A0h] [rbp-248h]
  __int64 v33; // [rsp+A8h] [rbp-240h]
  __int64 v34; // [rsp+B0h] [rbp-238h]
  WCHAR SourceString[256]; // [rsp+C0h] [rbp-228h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  *(_OWORD *)v28 = v3;
  *(_QWORD *)&v28[16] = *(_QWORD *)(v2 + 16);
  v4 = (WCHAR *)v3;
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  v5 = 0;
  v25 = 0;
  v6 = 2147483646LL;
  v34 = 2147483646LL;
  v32 = (WCHAR *)v3;
  v7 = 256LL;
  v33 = 256LL;
  v8 = SourceString;
  v29 = SourceString;
  v9 = 0;
  v10 = 0LL;
  v30 = 0LL;
  while ( v7 )
  {
    if ( !v6 )
      goto LABEL_10;
    v11 = *v4;
    if ( !*v4 )
      goto LABEL_10;
    v32 = ++v4;
    *v8++ = v11;
    v29 = v8;
    v33 = --v7;
    v34 = --v6;
    v30 = ++v10;
  }
  v29 = --v8;
  v30 = v10 - 1;
  v9 = -2147483643;
LABEL_10:
  *v8 = 0;
  v25 = v9;
  if ( v9 < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(v6);
  v14 = Current;
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    return 3221225485LL;
  }
  FileObject = 0LL;
  DeviceObject = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  memset(v28, 0, sizeof(v28));
  v17 = 0;
  v24 = 0;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  *(_QWORD *)v28 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  DeviceObjectPointer = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v28, v18, v19);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
    goto LABEL_37;
  v17 = *(_DWORD *)&v28[8];
  v24 = *(_DWORD *)&v28[8];
  v20 = *((_QWORD *)v14 + 11);
  if ( v20 )
    v5 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v20 + 224))(0LL, 0LL, 0LL) != 0;
  if ( v5 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v14 + 11) + 448LL))(*(_QWORD *)&v28[12]);
    DeviceObjectPointer = v21;
    if ( v21 < 0 )
      WdLogSingleEntry1(3LL, v21);
  }
  if ( DeviceObjectPointer < 0 )
  {
LABEL_37:
    *(_QWORD *)&v28[8] = 0LL;
    *(_DWORD *)&v28[16] = 0;
  }
  v22 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v22 = (_DWORD *)MmUserProbeAddress;
  *v22 = *(_DWORD *)&v28[8];
  v23 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v23 = (_QWORD *)MmUserProbeAddress;
  *v23 = *(_QWORD *)&v28[12];
  if ( DeviceObjectPointer < 0 )
  {
    if ( v17 )
    {
      v24 = v17;
      DxgkCloseAdapterImpl((__int64)&v24, 0, v16);
    }
  }
  return (unsigned int)DeviceObjectPointer;
}
