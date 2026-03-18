/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x1406CCBA0
 * Callers:
 *     SepInitProcessAuditSd @ 0x1403CE4A4 (SepInitProcessAuditSd.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x14041A13C (SepSetProcessTrustLabelAceForToken.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405F412C (SepBuildCapeSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406CC960 (ObpVerifyAccessToBoundaryEntry.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x140743E60 (LocalConvertStringSDToSD_Rev1.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14074F2EC (IopCreateSecurityDescriptorPerType.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140918670 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     ObInitSystem @ 0x140AFE184 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140B1E75C (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B2114C (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140B2A324 (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v5; // cx
  __int16 v6; // cx
  __int16 v8; // cx
  __int64 v9; // rax
  __int16 v10; // cx

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v8 = v5 | 0x10;
      v9 = 0LL;
      if ( a3 )
        v9 = a3;
      *(_QWORD *)(a1 + 24) = v9;
      v10 = v8 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v10;
      if ( !a4 )
        return 0LL;
      v6 = v10 | 0x20;
    }
    else
    {
      v6 = v5 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v6;
    return 0LL;
  }
  return 3221225593LL;
}
