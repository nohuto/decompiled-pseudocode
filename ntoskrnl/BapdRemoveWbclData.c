/*
 * XREFs of BapdRemoveWbclData @ 0x140AA7954
 * Callers:
 *     PopBootLoaderSiData @ 0x140A9E9C8 (PopBootLoaderSiData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     BapdGetISRegistryKey @ 0x140A8C170 (BapdGetISRegistryKey.c)
 */

int BapdRemoveWbclData()
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = BapdGetISRegistryKey(&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WBCL");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLDrtm");
    ZwDeleteValueKey(KeyHandle, &DestinationString);
    RtlInitUnicodeString(&DestinationString, L"WBCLTrustpoint");
    result = ZwDeleteValueKey(KeyHandle, &DestinationString);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
