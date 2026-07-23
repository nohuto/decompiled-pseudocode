/*
 * XREFs of PopSaveHibernateEnabled @ 0x1408E1784
 * Callers:
 *     PopEnableHiberFile @ 0x1407926A0 (PopEnableHiberFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x1403A7E00 (PopOpenKey.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 */

NTSTATUS PopSaveHibernateEnabled()
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp+8h] BYREF

  KeyHandle = 0LL;
  PopHiberEnabledReg = PopHiberEnabled != 0;
  DestinationString = 0LL;
  result = PopOpenKey(&KeyHandle, L"Control\\Power", 0x20006u);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HibernateEnabled");
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &PopHiberEnabledReg, 4u);
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
