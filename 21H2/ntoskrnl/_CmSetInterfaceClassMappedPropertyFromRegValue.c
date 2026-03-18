/*
 * XREFs of _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x140A2CD54
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x140A2CC38 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787DE8 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall CmSetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        int a5,
        void *a6,
        ULONG a7)
{
  int v7; // ebx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edi
  __int64 v15; // [rsp+28h] [rbp-30h]
  HANDLE v16[3]; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  v16[0] = 0LL;
  Handle = 0LL;
  v10 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v10 < 2 || (_DWORD)v10 != DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
    return (unsigned int)-1073741264;
  v11 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
    v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
  if ( v11 )
    return (unsigned int)-1073741264;
  if ( a5 != 18 )
    return (unsigned int)-1073741811;
  if ( (_DWORD)v10 == 2 )
  {
    v12 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v12 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v12 )
    {
      if ( !a3 )
      {
        v7 = CmOpenInterfaceClassRegKey(a1, a2, v10, a4, 1, 0, (__int64)v16, 0LL);
        if ( v7 < 0 )
        {
LABEL_20:
          if ( v16[0] )
            ZwClose(v16[0]);
          return (unsigned int)v7;
        }
        a3 = v16[0];
      }
      v7 = PnpOpenPropertiesKey(a1, (__int64)a3, 0LL, 2u, 1, v15, &Handle);
      if ( v7 >= 0 )
      {
        v13 = RegRtlSetValue(Handle, L"Default", 1u, a6, a7);
        ZwClose(Handle);
        if ( v13 == -1073741444 )
        {
          v7 = -1073741772;
        }
        else if ( v13 < 0 )
        {
          v7 = v13;
        }
      }
      goto LABEL_20;
    }
  }
  return (unsigned int)v7;
}
