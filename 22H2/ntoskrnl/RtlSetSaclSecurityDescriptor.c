/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1405DADB0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403B3FE8 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1403F82C4 (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x140595EAC (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405DAB30 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateSecurityDescriptorPerType @ 0x140719678 (IopCreateSecurityDescriptorPerType.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140778E88 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1407874B4 (LocalConvertStringSDToSD_Rev1.c)
 *     CmpCopySaclToVirtualKey @ 0x140871814 (CmpCopySaclToVirtualKey.c)
 *     ObInitSystem @ 0x140A3D968 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140A47F10 (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140A4A880 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140A6F2EC (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN SaclPresent,
        PACL Sacl,
        BOOLEAN SaclDefaulted)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  PACL v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v5 = *((_WORD *)SecurityDescriptor + 1);
  if ( v5 >= 0 )
  {
    if ( SaclPresent )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( Sacl )
        v9 = Sacl;
      *((_QWORD *)SecurityDescriptor + 3) = v9;
      v10 = v8 & 0xFFDF;
      *((_WORD *)SecurityDescriptor + 1) = v10;
      if ( !SaclDefaulted )
        return 0;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *((_WORD *)SecurityDescriptor + 1) = v6;
    return 0;
  }
  return -1073741703;
}
