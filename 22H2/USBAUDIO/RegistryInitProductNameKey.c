/*
 * XREFs of RegistryInitProductNameKey @ 0x1C002AF90
 * Callers:
 *     FilterInitComponentId @ 0x1C0023C4C (FilterInitComponentId.c)
 * Callees:
 *     RegistryCreateMediaCategoriesKey @ 0x1C002AE84 (RegistryCreateMediaCategoriesKey.c)
 */

__int64 __fastcall RegistryInitProductNameKey(const GUID *a1, void *a2, ULONG a3)
{
  NTSTATUS v5; // ebx
  HANDLE v6; // rbx
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  UnicodeString = 0LL;
  v5 = RtlStringFromGUID(a1, &UnicodeString);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v5 = RegistryCreateMediaCategoriesKey(&UnicodeString, &KeyHandle);
      if ( v5 >= 0 )
      {
        v6 = KeyHandle;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, L"Name");
        v5 = ZwSetValueKey(v6, &DestinationString, 0, 1u, a2, a3);
      }
    }
  }
  RtlFreeUnicodeString(&UnicodeString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
