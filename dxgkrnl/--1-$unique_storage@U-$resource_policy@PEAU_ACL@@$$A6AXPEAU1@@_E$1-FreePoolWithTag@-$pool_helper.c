/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006ADD4
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C03BDEE0 (AdjustCcdDatabasePermissions.c)
 *     CheckCallerMatchesSid @ 0x1C03BE504 (CheckCallerMatchesSid.c)
 *     CreateServiceSid @ 0x1C03BE784 (CreateServiceSid.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C03BEE7C (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x1C006AE18 (-FreePoolWithTag@-$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z.c)
 */

__int64 __fastcall __1__unique_storage_U__resource_policy_PEAU_ACL____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_ACL___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__IEAA_XZ(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag();
  return result;
}
