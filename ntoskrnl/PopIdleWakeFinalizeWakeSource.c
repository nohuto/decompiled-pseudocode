/*
 * XREFs of PopIdleWakeFinalizeWakeSource @ 0x14059B218
 * Callers:
 *     PopIdleWakeNotifyWakeSource @ 0x14059B75C (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 */

NTSTATUS __fastcall PopIdleWakeFinalizeWakeSource(int a1, __int64 a2)
{
  const wchar_t *v2; // r8
  NTSTATUS result; // eax

  if ( a1 == 129 && *(_BYTE *)a2 == 3 )
  {
    if ( !PopTimeBrokerExpirationDueTime
      || MEMORY[0xFFFFF78000000014] < (unsigned __int64)PopTimeBrokerExpirationDueTime
      || (v2 = &PopTimeBrokerExpirationReason,
          (unsigned __int64)(PopTimeBrokerExpirationDueTime + 20000000) < MEMORY[0xFFFFF78000000014]) )
    {
      v2 = L"Unknown";
    }
    return RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a2 + 2), 0x80uLL, v2);
  }
  return result;
}
