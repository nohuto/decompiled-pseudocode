/*
 * XREFs of _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x140A2A640
 * Callers:
 *     _CmSetInterfaceClassMappedProperty @ 0x140A2CC38 (_CmSetInterfaceClassMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     _PnpOpenPropertiesKey @ 0x14077EF20 (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787DE8 (_CmOpenInterfaceClassRegKey.c)
 */

__int64 __fastcall CmDeleteInterfaceClassMappedPropertyFromRegValue(__int64 a1, int a2, HANDLE a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  NTSTATUS inited; // edi
  __int64 v12; // [rsp+28h] [rbp-40h]
  HANDLE Handle; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  v7 = *(unsigned int *)(a4 + 16);
  if ( (unsigned int)v7 < 2 || (_DWORD)v7 != DEVPKEY_DeviceInterfaceClass_DefaultInterface.pid )
    return (unsigned int)-1073741264;
  v8 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
    v8 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
  if ( v8 )
    return (unsigned int)-1073741264;
  if ( (_DWORD)v7 == 2 )
  {
    v9 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v9 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v9 )
    {
      if ( !a3 )
      {
        v4 = CmOpenInterfaceClassRegKey(a1, a2, v7, a4, 1, 0, (__int64)&Handle, 0LL);
        if ( v4 < 0 )
        {
LABEL_22:
          if ( Handle )
            ZwClose(Handle);
          return (unsigned int)v4;
        }
        a3 = Handle;
      }
      v4 = PnpOpenPropertiesKey(a1, (__int64)a3, 0LL, 2u, 0, v12, &KeyHandle);
      if ( v4 == -1073741772 )
      {
        v4 = -1073741275;
      }
      else if ( v4 >= 0 )
      {
        DestinationString = 0LL;
        inited = RtlInitUnicodeStringEx(&DestinationString, L"Default");
        if ( inited >= 0 )
          inited = ZwDeleteValueKey(KeyHandle, &DestinationString);
        ZwClose(KeyHandle);
        if ( inited != -1073741772 && inited != -1073741444 && inited < 0 )
          v4 = inited;
      }
      goto LABEL_22;
    }
  }
  return (unsigned int)v4;
}
