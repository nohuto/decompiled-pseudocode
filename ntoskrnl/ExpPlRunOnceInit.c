/*
 * XREFs of ExpPlRunOnceInit @ 0x140606620
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl(&Dacl, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(&Dacl, 2u, 1u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&unk_140CF7E10, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(&unk_140CF7E10, 1u, &Dacl, 0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
