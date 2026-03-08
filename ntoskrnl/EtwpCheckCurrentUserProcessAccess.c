/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409E94C0
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x140690060 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409E97F4 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140692ED0 (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x1406DB240 (ObpGetObjectSecurity.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  v4 = 0;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &v4, 0);
  v2 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  ObReleaseObjectSecurityEx(SecurityDescriptor, v4, a1);
  return v2;
}
