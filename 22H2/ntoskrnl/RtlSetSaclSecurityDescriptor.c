/*
 * XREFs of RtlSetSaclSecurityDescriptor @ 0x140736AB0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B3710 (SepSetProcessTrustLabelAceForToken.c)
 *     SepInitProcessAuditSd @ 0x140387AB0 (SepInitProcessAuditSd.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1405B7B28 (SepBuildCapeSecurityDescriptor.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x14069BA60 (LocalConvertStringSDToSD_Rev1.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14076BAD0 (IopCreateSecurityDescriptorPerType.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1407F3170 (ObpVerifyAccessToBoundaryEntry.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140885688 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpCopySaclToVirtualKey @ 0x140A1B43C (CmpCopySaclToVirtualKey.c)
 *     ObInitSystem @ 0x140B4E9F8 (ObInitSystem.c)
 *     SeMakeSystemToken @ 0x140B576DC (SeMakeSystemToken.c)
 *     SepInitSystemDacls @ 0x140B59E44 (SepInitSystemDacls.c)
 *     ExpKeyedEventInitialization @ 0x140B6ECCC (ExpKeyedEventInitialization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetSaclSecurityDescriptor(__int64 a1, char a2, __int64 a3, char a4)
{
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax
  __int16 v8; // ax

  if ( *(_BYTE *)a1 != 1 )
    return 3221225560LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      v5 = v4 | 0x10;
      *(_QWORD *)(a1 + 24) = 0LL;
      if ( a3 )
        *(_QWORD *)(a1 + 24) = a3;
      v6 = v5 & 0xFFDF;
      *(_WORD *)(a1 + 2) = v6;
      if ( !a4 )
        return 0LL;
      v8 = v6 | 0x20;
    }
    else
    {
      v8 = v4 & 0xFFEF;
    }
    *(_WORD *)(a1 + 2) = v8;
    return 0LL;
  }
  return 3221225593LL;
}
