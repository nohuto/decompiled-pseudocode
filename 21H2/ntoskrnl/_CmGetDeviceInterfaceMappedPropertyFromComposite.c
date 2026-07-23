/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140632AA8
 * Callers:
 *     _CmGetDeviceInterfaceMappedProperty @ 0x1406324F8 (_CmGetDeviceInterfaceMappedProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyKeys @ 0x14072DD10 (_CmGetDeviceInterfaceMappedPropertyKeys.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140632D04 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072B8B8 (_CmGetDeviceInterfaceReferenceString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyFromComposite(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r12
  _DWORD *v9; // rsi
  __int64 v11; // r14
  int DeviceInterfaceClassGuid; // ebx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v17; // rax
  PVOID PoolWithTag; // rax
  void *v19; // r15
  __int64 v20; // rax
  int ObjectProperty; // eax
  __int64 v22; // rax
  int DeviceInterfaceReferenceString; // eax
  unsigned __int64 v24; // rax
  unsigned int v25; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v26[3]; // [rsp+64h] [rbp-Ch] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF

  v8 = a5;
  v9 = a8;
  v11 = a6;
  DeviceInterfaceClassGuid = 0;
  v29 = 0;
  *a5 = 0;
  *v9 = 0;
  v25 = 0;
  v26[0] = 0;
  if ( v11 )
  {
    v13 = a7;
    v11 &= -(__int64)(a7 != 0);
  }
  else
  {
    v13 = 0;
  }
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 < 2 )
  {
    return (unsigned int)-1073741264;
  }
  else
  {
    switch ( v14 )
    {
      case 0xAu:
        v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v20 )
        {
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             3LL,
                             a3,
                             0LL,
                             (__int64)&DEVPKEY_DeviceInterface_FriendlyName,
                             (__int64)v8,
                             v11,
                             v13,
                             (__int64)&v29,
                             0);
          DeviceInterfaceClassGuid = ObjectProperty;
          if ( !ObjectProperty || ObjectProperty == -1073741789 )
            *v9 = v29;
        }
        break;
      case 4u:
        v15 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data1 )
          v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ClassGuid.fmtid.Data4;
        if ( !v15 )
        {
          *v9 = 16;
          *v8 = 13;
          if ( v13 < 0x10 )
            DeviceInterfaceClassGuid = -1073741789;
          else
            DeviceInterfaceClassGuid = CmGetDeviceInterfaceClassGuid(a1, a2, v11);
        }
        break;
      case 5u:
        v22 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data1 )
          v22 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterface_ReferenceString.fmtid.Data4;
        if ( !v22 )
        {
          DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(a1, a2, v11, v13 >> 1, &v25);
          DeviceInterfaceClassGuid = DeviceInterfaceReferenceString;
          if ( DeviceInterfaceReferenceString == -1073741772 )
          {
            DeviceInterfaceClassGuid = -1073741275;
          }
          else if ( !DeviceInterfaceReferenceString || DeviceInterfaceReferenceString == -1073741789 )
          {
            v24 = 2LL * v25;
            if ( v24 > 0xFFFFFFFF )
            {
              DeviceInterfaceClassGuid = -1073741595;
            }
            else
            {
              *v9 = v24;
              *v8 = 18;
            }
          }
        }
        break;
      case 2u:
        v17 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( !v17 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
          v19 = PoolWithTag;
          if ( PoolWithTag )
          {
            DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                         a1,
                                         a2,
                                         3LL,
                                         a3,
                                         0LL,
                                         (__int64)&DEVPKEY_Device_InstanceId,
                                         (__int64)v26,
                                         (__int64)PoolWithTag,
                                         400,
                                         (__int64)&v29,
                                         0);
            if ( DeviceInterfaceClassGuid >= 0 )
            {
              if ( v26[0] != 18
                || (DeviceInterfaceClassGuid = PnpGetObjectProperty(
                                                 a1,
                                                 (__int64)v19,
                                                 1LL,
                                                 0LL,
                                                 0LL,
                                                 (__int64)&DEVPKEY_Device_ContainerId,
                                                 (__int64)v8,
                                                 v11,
                                                 v13,
                                                 (__int64)&v29,
                                                 0),
                    DeviceInterfaceClassGuid == -1073741772) )
              {
                DeviceInterfaceClassGuid = -1073741275;
              }
            }
            ExFreePoolWithTag(v19, 0);
            if ( !DeviceInterfaceClassGuid || DeviceInterfaceClassGuid == -1073741789 )
              *v9 = v29;
          }
          else
          {
            DeviceInterfaceClassGuid = -1073741801;
          }
        }
        break;
    }
  }
  return (unsigned int)DeviceInterfaceClassGuid;
}
