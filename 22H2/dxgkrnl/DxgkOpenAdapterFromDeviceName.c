/*
 * XREFs of DxgkOpenAdapterFromDeviceName @ 0x1C0145830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000C2B4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0115DA0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkCloseAdapterImpl @ 0x1C0124D90 (DxgkCloseAdapterImpl.c)
 *     DpiValidateDeviceName @ 0x1C0149894 (DpiValidateDeviceName.c)
 */

__int64 __fastcall DxgkOpenAdapterFromDeviceName(ULONG64 a1)
{
  ULONG64 v2; // rax
  __int128 v3; // xmm1
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGPROCESS *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // rdx
  _QWORD *v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+20h] [rbp-278h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+28h] [rbp-270h] BYREF
  PFILE_OBJECT FileObject; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v32[24]; // [rsp+38h] [rbp-260h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-248h] BYREF
  __int128 v34; // [rsp+60h] [rbp-238h]
  __int64 v35; // [rsp+70h] [rbp-228h]
  WCHAR SourceString[256]; // [rsp+80h] [rbp-218h] BYREF

  DestinationString = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  v3 = *(_OWORD *)v2;
  v34 = v3;
  v35 = *(_QWORD *)(v2 + 16);
  if ( (__int64)v3 + 512 > MmUserProbeAddress || (__int64)v3 + 512 < (unsigned __int64)v3 )
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( (int)RtlStringCbCopyW(SourceString, 0x200uLL, (size_t *)v3) < 0 )
    return 3221225485LL;
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v12 = Current;
  if ( !Current )
  {
    v26 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( DestinationString.Length > 1u && SourceString[1] == 92 )
    SourceString[1] = 63;
  if ( (int)DpiValidateDeviceName(&DestinationString) < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v27 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    return 3221225485LL;
  }
  FileObject = 0LL;
  DeviceObject = 0LL;
  LODWORD(v16) = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
  memset(v32, 0, sizeof(v32));
  v18 = 0;
  v29 = 0;
  if ( (int)v16 < 0 )
    goto LABEL_29;
  *(_QWORD *)v32 = DeviceObject;
  ObfReferenceObject(DeviceObject);
  ObfDereferenceObject(FileObject);
  FileObject = 0LL;
  LODWORD(v16) = DxgkOpenAdapter((struct _D3DKMT_OPENADAPTER *)v32, v19, v20);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( (int)v16 < 0 )
    goto LABEL_29;
  v18 = *(_DWORD *)&v32[8];
  v29 = *(_DWORD *)&v32[8];
  if ( DXGPROCESS::IsRemoteConnection(v12) )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v12 + 11) + 448LL))(*(_QWORD *)&v32[12]);
    v16 = v23;
    if ( v23 < 0 )
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v17);
      *(_QWORD *)(v28 + 24) = v16;
      WdLogEvent5_WdWarning(v28);
    }
  }
  if ( (int)v16 < 0 )
  {
LABEL_29:
    *(_QWORD *)&v32[8] = 0LL;
    *(_DWORD *)&v32[16] = 0;
  }
  v21 = (_DWORD *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v21 = (_DWORD *)MmUserProbeAddress;
  *v21 = *(_DWORD *)&v32[8];
  v22 = (_QWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v22 = (_QWORD *)MmUserProbeAddress;
  *v22 = *(_QWORD *)&v32[12];
  if ( (int)v16 < 0 )
  {
    if ( v18 )
    {
      v29 = v18;
      DxgkCloseAdapterImpl((__int64)&v29, 0, v17);
    }
  }
  return (unsigned int)v16;
}
