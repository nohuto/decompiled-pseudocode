/*
 * XREFs of ndisIfReadHiddenFlag @ 0x1C0107CDC
 * Callers:
 *     ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01012B8 (-ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJEC.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0127C0C (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031C98 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0102C30 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

NTSTATUS __fastcall ndisIfReadHiddenFlag(void ***this, PDEVICE_OBJECT DeviceObject, bool *a3)
{
  NTSTATUS result; // eax
  const wchar_t *v6; // rax
  __int64 v7; // rdx
  char v8; // si
  __int64 v9; // rcx
  NTSTATUS v10; // edi
  HANDLE v11; // rbx
  HANDLE KeyHandle; // [rsp+30h] [rbp-40h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-38h] BYREF
  HANDLE DeviceRegKey; // [rsp+48h] [rbp-28h] BYREF
  __int128 KeyValueInformation; // [rsp+50h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp-10h]

  if ( !DeviceObject )
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D47E0, a3);
  DeviceRegKey = 0LL;
  result = IoOpenDeviceRegistryKey(DeviceObject, 2u, 0x80000000, &DeviceRegKey);
  if ( result < 0 )
    return result;
  KeyHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (__int64 *)&KeyHandle,
    (__int64)DeviceRegKey);
  v6 = L"Characteristics";
  ValueName = 0LL;
  v7 = 0x7FFFLL;
  v8 = 0;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = (0x7FFF - v7) & -(__int64)(v7 != 0);
  v10 = v7 == 0 ? 0xC000000D : 0;
  if ( v7 )
  {
    ValueName.Buffer = L"Characteristics";
    ValueName.Length = 2 * v9;
    ValueName.MaximumLength = 2 * v9 + 2;
  }
  v11 = KeyHandle;
  if ( v7 )
  {
    LODWORD(KeyHandle) = 0;
    v16 = 0;
    KeyValueInformation = 0LL;
    v10 = ZwQueryValueKey(v11, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, (PULONG)&KeyHandle);
    if ( v10 >= 0 )
    {
      if ( DWORD1(KeyValueInformation) == 4 )
      {
        if ( DWORD2(KeyValueInformation) == 4 )
        {
          v8 = BYTE12(KeyValueInformation);
          v10 = 0;
        }
        else
        {
          v10 = -1073741789;
        }
      }
      else
      {
        v10 = -1073741788;
      }
    }
  }
  if ( v10 == -1073741772 )
  {
    if ( v11 )
    {
      *(_QWORD *)&ValueName.Length = ZwClose;
      KeyHandle = v11;
      wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&ValueName, &KeyHandle);
    }
    return NetSetupPropertyBag::ReadBoolean(this, (const struct _NETSETUPPROPKEY *)&unk_1C00D47E0, a3);
  }
  if ( !v10 )
  {
    v10 = 0;
    *a3 = (v8 & 8) != 0;
  }
  if ( v11 )
  {
    KeyHandle = ZwClose;
    *(_QWORD *)&ValueName.Length = v11;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(
      (__int64 (__fastcall **)(_QWORD))&KeyHandle,
      &ValueName);
  }
  return v10;
}
