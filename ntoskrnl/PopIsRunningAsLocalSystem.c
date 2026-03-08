/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x14079C550
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402BDFD0 (RtlCheckTokenMembership.c)
 */

char PopIsRunningAsLocalSystem()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &v1);
  return v1;
}
