/*
 * XREFs of ?ndisMAllowSilentReenumerate@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011EE80
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008099C (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0031C98 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003DA08 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0108B80 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

bool __fastcall ndisMAllowSilentReenumerate(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  HANDLE v2; // rbx
  NTSTATUS ValueUlong; // eax
  bool v4; // di
  HANDLE Data; // [rsp+50h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+28h] BYREF
  HANDLE DeviceRegKey; // [rsp+60h] [rbp+30h] BYREF

  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  DeviceRegKey = 0LL;
  v2 = 0LL;
  LODWORD(Data) = 0;
  KeyHandle = 0LL;
  v4 = 0;
  if ( IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey) >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (__int64 *)&KeyHandle,
      (__int64)DeviceRegKey);
    ValueUlong = KRegKey::QueryValueUlong(
                   (KRegKey *)&KeyHandle,
                   (struct _UNICODE_STRING *)&stru_1C00CA2B0,
                   (unsigned int *)&Data);
    v2 = KeyHandle;
    if ( ValueUlong >= 0 )
    {
      if ( (_DWORD)Data )
      {
        LODWORD(Data) = (_DWORD)Data - 1;
        if ( ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&stru_1C00CA2B0, 0, 4u, &Data, 4u) >= 0 )
          v4 = 1;
      }
    }
  }
  if ( v2 )
  {
    KeyHandle = ZwClose;
    Data = v2;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>((__int64 (__fastcall **)(_QWORD))&KeyHandle, &Data);
  }
  return v4;
}
