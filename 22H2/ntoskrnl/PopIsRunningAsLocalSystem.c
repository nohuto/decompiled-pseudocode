/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x1407EBFB8
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x1407ED5EC (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14036FA40 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &v1);
  return v1;
}
