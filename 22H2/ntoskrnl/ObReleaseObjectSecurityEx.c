/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x1406C3160
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     MiAllowImageMap @ 0x1406AF6A4 (MiAllowImageMap.c)
 *     ObpInsertOrLocateNamedObject @ 0x1406C0B0C (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1406C301C (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1406C4FC0 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1407B6810 (ObCheckObjectAccess.c)
 *     PopBootStatAccessCheck @ 0x1407EC0D4 (PopBootStatAccessCheck.c)
 *     ObpCheckTraverseAccess @ 0x14097B7C8 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409B214C (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EC360 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1406C318C (ObpDereferenceSecurityDescriptorForObject.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ObReleaseObjectSecurityEx(void *a1, char a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a1, 0);
    else
      ObpDereferenceSecurityDescriptorForObject(a1, a3 - 48);
  }
}
