/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x1406BD0D8
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1406324F8 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14072DD10 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1406361B0 (_CmIsDeviceInterfaceEnabled.c)
 *     _PnpCtxRegQueryValueIndirect @ 0x140636780 (_PnpCtxRegQueryValueIndirect.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromRegValue(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // rdx
  _DWORD *v10; // rcx
  _BYTE *v11; // r12
  int IsDeviceInterfaceEnabled; // ebx
  int v15; // r14d
  unsigned int v16; // r11d
  unsigned int v17; // r10d
  DEVPROPKEY **v18; // r8
  DEVPROPKEY *v19; // r9
  DEVPROPKEY **v20; // r15
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int ValueIndirect; // edi
  __int64 v26; // rax
  __int64 v27; // rax
  HANDLE v28; // rdx
  int v29; // eax
  _BYTE v30[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+44h] [rbp-2Ch] BYREF
  HANDLE v32; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  HANDLE v34[2]; // [rsp+60h] [rbp-10h] BYREF

  v8 = a5;
  v10 = 0LL;
  v11 = (_BYTE *)a6;
  v34[0] = 0LL;
  *a5 = 0;
  IsDeviceInterfaceEnabled = 0;
  *a8 = 0;
  Handle = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v30[0] = 0;
  if ( a6 )
  {
    v15 = a7;
    v11 = (_BYTE *)(-(__int64)(a7 != 0) & a6);
    v10 = 0LL;
  }
  else
  {
    v15 = 0;
  }
  v16 = *(_DWORD *)(a4 + 16);
  if ( v16 < 2 )
    return (unsigned int)-1073741264;
  v17 = 0;
  v18 = &off_140983B98;
  while ( 1 )
  {
    v19 = *v18;
    v20 = v18;
    if ( v16 == (*v18)->pid )
      break;
LABEL_6:
    ++v17;
    v18 += 2;
    v20 = 0LL;
    if ( v17 >= 3 )
      goto LABEL_11;
  }
  v10 = (_DWORD *)(*(_QWORD *)a4 - *(_QWORD *)&v19->fmtid.Data1);
  if ( *(_QWORD *)a4 == *(_QWORD *)&v19->fmtid.Data1 )
    v10 = (_DWORD *)(*(_QWORD *)(a4 + 8) - *(_QWORD *)v19->fmtid.Data4);
  if ( v10 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
LABEL_11:
  if ( !v20 )
    return (unsigned int)-1073741264;
  if ( a3 )
    goto LABEL_15;
  v21 = CmOpenDeviceInterfaceRegKey(a1, (__int64)a2, 0x30u, (__int64)v19, 1, (char)v10, (__int64)v34, v10);
  v10 = 0LL;
  IsDeviceInterfaceEnabled = v21;
  if ( v21 >= 0 )
  {
    v8 = a5;
LABEL_15:
    v22 = *(_DWORD *)(a4 + 16);
    if ( v22 == 2 )
    {
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_FriendlyName.fmtid.Data4;
      if ( v27 )
        goto LABEL_65;
      v28 = v34[0];
      if ( a3 )
        v28 = a3;
      if ( a1 )
        v10 = *(_DWORD **)(a1 + 224);
      v29 = SysCtxRegOpenKey((__int64)v10, (__int64)v28, (__int64)L"Device Parameters", 0, 1u, (__int64)&v32);
      if ( v29 == -1073741772 || v29 == -1073741444 )
        goto LABEL_52;
      if ( v29 < 0 )
      {
        IsDeviceInterfaceEnabled = v29;
        goto LABEL_27;
      }
      LODWORD(v31) = v15;
      ValueIndirect = PnpCtxRegQueryValueIndirect(a1, (__int64)v32);
      ZwClose(v32);
      if ( ValueIndirect == -1073741772 || ValueIndirect == -1073741444 )
        goto LABEL_52;
      if ( ValueIndirect && ValueIndirect != -1073741789 )
        goto LABEL_60;
      *a8 = v31;
      *a5 = 18;
      if ( ValueIndirect || !v15 )
        IsDeviceInterfaceEnabled = -1073741789;
    }
    else
    {
      if ( v22 != 3 )
      {
        if ( v22 == 256 )
        {
          v23 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
            v23 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
          if ( !v23 )
          {
            IsDeviceInterfaceEnabled = CmOpenDeviceInterfaceRegKey(
                                         a1,
                                         (__int64)a2,
                                         0x31u,
                                         (__int64)v19,
                                         1,
                                         (char)v10,
                                         (__int64)&Handle,
                                         v10);
            if ( IsDeviceInterfaceEnabled < 0 )
              goto LABEL_27;
            LODWORD(v31) = v15;
            ValueIndirect = RegRtlQueryValue(Handle, L"DeviceInstance", (_DWORD *)&v31 + 1, v11, (unsigned int *)&v31);
            ZwClose(Handle);
            if ( ValueIndirect != -1073741772 && ValueIndirect != -1073741444 )
            {
              if ( !ValueIndirect || ValueIndirect == -1073741789 )
              {
                *a8 = v31;
                *a5 = 18;
                if ( ValueIndirect || !v15 )
                  IsDeviceInterfaceEnabled = -1073741789;
                goto LABEL_27;
              }
LABEL_60:
              IsDeviceInterfaceEnabled = ValueIndirect;
              goto LABEL_27;
            }
LABEL_52:
            IsDeviceInterfaceEnabled = -1073741275;
            goto LABEL_27;
          }
        }
LABEL_65:
        IsDeviceInterfaceEnabled = -1073741264;
        goto LABEL_27;
      }
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_Enabled.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_Enabled.fmtid.Data4;
      if ( v26 )
        goto LABEL_65;
      *a8 = 1;
      *v8 = 17;
      if ( v15 )
      {
        IsDeviceInterfaceEnabled = CmIsDeviceInterfaceEnabled(a1, a2, (__int64)v18, (__int64)v30);
        if ( IsDeviceInterfaceEnabled >= 0 )
          *v11 = -(v30[0] != 0);
      }
      else
      {
        IsDeviceInterfaceEnabled = -1073741789;
      }
    }
  }
LABEL_27:
  if ( v34[0] )
    ZwClose(v34[0]);
  return (unsigned int)IsDeviceInterfaceEnabled;
}
