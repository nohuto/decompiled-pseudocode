/*
 * XREFs of ObReleaseObjectSecurity @ 0x1406D81D0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     ObCheckObjectAccess @ 0x1405D9860 (ObCheckObjectAccess.c)
 *     MiAllowImageMap @ 0x14061DE10 (MiAllowImageMap.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpCheckObjectReference @ 0x1406D9CFC (ObpCheckObjectReference.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406DB6F0 (ObpInsertOrLocateNamedObject.c)
 *     ObCheckCreateObjectAccess @ 0x1406DBC80 (ObCheckCreateObjectAccess.c)
 *     PopBootStatAccessCheck @ 0x1407C1BDC (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x1408DD180 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140908C3C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x140941528 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x1406D8460 (ObDereferenceSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
      ExFreePoolWithTag(SecurityDescriptor, 0);
    else
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
  }
}
