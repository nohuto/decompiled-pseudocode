/*
 * XREFs of ObReleaseObjectSecurityEx @ 0x1406993F0
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ObpCheckObjectReference @ 0x1406992AC (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x14069A900 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x14069DB90 (ObCheckObjectAccess.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     PopBootStatAccessCheck @ 0x140798D98 (PopBootStatAccessCheck.c)
 *     MiAllowImageMap @ 0x1407D35A0 (MiAllowImageMap.c)
 *     ObpCheckTraverseAccess @ 0x140978718 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1409AF0FC (PspCheckJobAccessState.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409E94C0 (EtwpCheckCurrentUserProcessAccess.c)
 * Callees:
 *     ObpDereferenceSecurityDescriptorForObject @ 0x14069941C (ObpDereferenceSecurityDescriptorForObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
