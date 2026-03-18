/*
 * XREFs of _CmGetInterfaceClassMappedProperty @ 0x140787730
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140787620 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x140787818 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x140A2BD78 (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InterfaceClassMappedPropertyFromRegValue; // r10d
  __int64 v13; // rcx
  __int64 v15; // rdx

  InterfaceClassMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    if ( !&DEVPKEY_DeviceInterfaceClass_DefaultInterface
      || *(_DWORD *)(a5 + 16) != DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
    {
      goto LABEL_9;
    }
    v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( v13
      || (InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                       a1,
                                                       a2,
                                                       a3,
                                                       a5,
                                                       a6,
                                                       a7,
                                                       a8,
                                                       (__int64)a9),
          InterfaceClassMappedPropertyFromRegValue == -1073741802) )
    {
LABEL_9:
      if ( *(_DWORD *)(a5 + 16) == DEVPKEY_NAME.pid )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
        if ( !v15 )
          return (unsigned int)CmGetInterfaceClassMappedPropertyFromComposite(a1, a2, a3, a5, a6, a7, a8, (__int64)a9);
      }
    }
  }
  return InterfaceClassMappedPropertyFromRegValue;
}
