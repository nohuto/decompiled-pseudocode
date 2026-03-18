/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x1409EC360
 * Callers:
 *     EtwpNotifyGuid @ 0x14077FEF8 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x1407813B8 (EtwpIsRegEntryAllowed.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC694 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x1406C3160 (ObReleaseObjectSecurityEx.c)
 *     ObpGetObjectSecurity @ 0x140736720 (ObpGetObjectSecurity.c)
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
