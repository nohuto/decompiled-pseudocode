/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C006AE40
 * Callers:
 *     AdjustCcdDatabasePermissions @ 0x1C03BDEE0 (AdjustCcdDatabasePermissions.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x1C006AE18 (-FreePoolWithTag@-$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z.c)
 */

void __fastcall _reset___unique_storage_U__resource_policy_PEAU_KEY_BASIC_INFORMATION____A6AXPEAU1___E_1_FreePoolWithTag___pool_helpers_PEAU_KEY_BASIC_INFORMATION___0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAU1_PEAU1__0A___T_details_wil___details_wil__QEAAXPEAU_KEY_BASIC_INFORMATION___Z(
        void **a1,
        void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( v4 )
    wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag(v4);
  *a1 = a2;
}
