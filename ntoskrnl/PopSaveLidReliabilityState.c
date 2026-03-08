/*
 * XREFs of PopSaveLidReliabilityState @ 0x140987B68
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     PopOpenPersistedRegistryKey @ 0x14080FB6C (PopOpenPersistedRegistryKey.c)
 */

NTSTATUS __fastcall PopSaveLidReliabilityState(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = PopOpenPersistedRegistryKey(a1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LidReliabilityState");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopLidStateIsReliable, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
