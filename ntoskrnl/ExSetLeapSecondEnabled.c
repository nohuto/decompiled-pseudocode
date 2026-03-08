/*
 * XREFs of ExSetLeapSecondEnabled @ 0x1409F4D44
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     ExpGetLeapSecondDataRegistryKeyHandle @ 0x140851054 (ExpGetLeapSecondDataRegistryKeyHandle.c)
 */

__int64 __fastcall ExSetLeapSecondEnabled(char a1)
{
  NTSTATUS LeapSecondDataRegistryKeyHandle; // edi
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+18h] BYREF

  Data = 0;
  KeyHandle = 0LL;
  LeapSecondDataRegistryKeyHandle = ExpGetLeapSecondDataRegistryKeyHandle(&KeyHandle);
  if ( LeapSecondDataRegistryKeyHandle >= 0 )
  {
    Data = a1 != 0;
    LeapSecondDataRegistryKeyHandle = ZwSetValueKey(
                                        KeyHandle,
                                        (PUNICODE_STRING)&ExpLeapSecondRegkeyValueEnabled,
                                        0,
                                        4u,
                                        &Data,
                                        4u);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)LeapSecondDataRegistryKeyHandle;
}
