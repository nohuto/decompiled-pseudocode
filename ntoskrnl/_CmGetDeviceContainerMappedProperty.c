/*
 * XREFs of _CmGetDeviceContainerMappedProperty @ 0x140682BF4
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140682AC0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     _CmIsLocalMachineContainer @ 0x140859BD8 (_CmIsLocalMachineContainer.c)
 *     _CmGetContainerBooleanProperty @ 0x140A61414 (_CmGetContainerBooleanProperty.c)
 */

__int64 __fastcall CmGetDeviceContainerMappedProperty(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v11; // r9d
  __int64 v13; // rcx
  bool v14; // cf
  __int64 v15; // rcx
  const DEVPROPKEY *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx

  v10 = -1073741802;
  *a9 = 0;
  if ( a4 )
    return v10;
  v11 = *(_DWORD *)(a5 + 16);
  switch ( v11 )
  {
    case 'F':
      v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1 )
        v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data4;
      if ( !v13 )
      {
        *a6 = 17;
        *a9 = 1;
        if ( a8 )
        {
          v14 = (unsigned __int8)CmIsLocalMachineContainer(a1) != 0;
          v10 = 0;
          *a7 = -v14;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
      return v10;
    case 'S':
      v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1 )
        v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_HasProblem.fmtid.Data4;
      if ( v15 )
        return v10;
      v16 = &DEVPKEY_Device_HasProblem;
      return (unsigned int)CmGetContainerBooleanProperty(
                             a1,
                             a2,
                             a3,
                             (_DWORD)v16,
                             (__int64)a6,
                             (__int64)a7,
                             a8,
                             (__int64)a9);
    case '7':
      v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1 )
        v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
      if ( v17 )
        return v10;
      v16 = (const DEVPROPKEY *)&DEVPKEY_Device_IsConnected;
      return (unsigned int)CmGetContainerBooleanProperty(
                             a1,
                             a2,
                             a3,
                             (_DWORD)v16,
                             (__int64)a6,
                             (__int64)a7,
                             a8,
                             (__int64)a9);
    case 'l':
      v18 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1 )
        v18 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data4;
      if ( !v18 )
      {
        v16 = &DEVPKEY_Device_IsRebootRequired;
        return (unsigned int)CmGetContainerBooleanProperty(
                               a1,
                               a2,
                               a3,
                               (_DWORD)v16,
                               (__int64)a6,
                               (__int64)a7,
                               a8,
                               (__int64)a9);
      }
      break;
  }
  return v10;
}
