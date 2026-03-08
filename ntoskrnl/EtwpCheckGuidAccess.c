/*
 * XREFs of EtwpCheckGuidAccess @ 0x1406910EC
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140690144 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckNotificationAccess @ 0x140690CB0 (EtwpCheckNotificationAccess.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408606D8 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409EBA08 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409EBE4C (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x140696014 (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406972D0 (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  unsigned int v3; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  v3 = EtwpAccessCheck(SecurityDescriptor, a2);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return v3;
}
