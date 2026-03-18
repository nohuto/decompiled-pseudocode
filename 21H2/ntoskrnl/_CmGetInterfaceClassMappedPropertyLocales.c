/*
 * XREFs of _CmGetInterfaceClassMappedPropertyLocales @ 0x140A2C000
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v7 = -1073741802;
  *a7 = 0;
  if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface
    && *(_DWORD *)(a4 + 16) == DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
  {
    v8 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v8 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v8 )
      goto LABEL_10;
  }
  if ( *(_DWORD *)(a4 + 16) == DEVPKEY_NAME.pid )
  {
    v9 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v9 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v9 )
    {
LABEL_10:
      *a7 = 1;
      if ( a6 )
      {
        v7 = 0;
        *a5 = 0;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  return v7;
}
