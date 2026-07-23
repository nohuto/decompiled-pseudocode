/*
 * XREFs of PopIdleWakeFinalizeWakeSource @ 0x14057B6B8
 * Callers:
 *     PopIdleWakeNotifyWakeSource @ 0x14057BF60 (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 */

NTSTATUS __fastcall PopIdleWakeFinalizeWakeSource(int a1, __int64 a2)
{
  wchar_t *v3; // r9
  wchar_t *v4; // rdx
  const wchar_t *v5; // r8
  NTSTATUS result; // eax

  if ( a1 == 6 && *(_BYTE *)a2 == 3 )
  {
    v3 = 0LL;
    if ( PopTimeBrokerExpirationDueTime
      && MEMORY[0xFFFFF78000000014] >= (unsigned __int64)PopTimeBrokerExpirationDueTime )
    {
      v4 = &PopTimeBrokerExpirationReason;
      if ( (unsigned __int64)(PopTimeBrokerExpirationDueTime + 20000000) < MEMORY[0xFFFFF78000000014] )
        v4 = 0LL;
      v3 = v4;
    }
    v5 = L"Unknown";
    if ( v3 )
      v5 = v3;
    return RtlStringCbCopyW((NTSTRSAFE_PWSTR)(a2 + 2), 0x80uLL, v5);
  }
  return result;
}
