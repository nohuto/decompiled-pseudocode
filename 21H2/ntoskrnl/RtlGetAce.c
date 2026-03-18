/*
 * XREFs of RtlGetAce @ 0x1402A4750
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140257C7C (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14064B9D8 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     LocalGetAclForString @ 0x140675DA8 (LocalGetAclForString.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140724550 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1407F8298 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140801A80 (PopCreateHiberFileSecurityDescriptor.c)
 *     ObpGetDosDevicesProtection @ 0x14082C74C (ObpGetDosDevicesProtection.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140834D0C (CmpHiveRootSecurityDescriptor.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetAce(PACL Acl, ULONG AceIndex, PVOID *Ace)
{
  PACL v4; // r9
  ULONG v5; // r8d

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u && AceIndex < Acl->AceCount )
  {
    v4 = Acl + 1;
    *Ace = &Acl[1];
    v5 = 0;
    if ( AceIndex )
    {
      while ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
      {
        ++v5;
        v4 = (PACL)((char *)v4 + v4->AclSize);
        *Ace = v4;
        if ( v5 >= AceIndex )
          goto LABEL_4;
      }
    }
    else
    {
LABEL_4:
      if ( v4 < (PACL)((char *)Acl + Acl->AclSize) )
        return 0;
    }
  }
  return -1073741811;
}
