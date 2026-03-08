/*
 * XREFs of RtlGetAce @ 0x140245EE0
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1402BE754 (SepAppendAceToTokenDefaultDacl.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406D22B0 (SepAppendAceToTokenObjectAcl.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1407FC318 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140816360 (CmpHiveRootSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x140855400 (ObpGetDosDevicesProtection.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140878110 (PiDevCfgGetKeySecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1409BB734 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  ULONG v4; // r9d
  PACL v5; // r8

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = 0;
    v5 = Acl + 1;
    *Ace = &Acl[1];
    if ( AceIndex )
    {
      while ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v4;
        v5 = (PACL)((char *)v5 + v5->AclSize);
        *Ace = v5;
        if ( v4 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v5 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
