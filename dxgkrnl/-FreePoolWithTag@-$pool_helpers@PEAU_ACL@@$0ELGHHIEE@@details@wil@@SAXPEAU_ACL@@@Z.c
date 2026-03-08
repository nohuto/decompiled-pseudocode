/*
 * XREFs of ?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAXPEAU_ACL@@@Z @ 0x1C006AE18
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_ACL@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C006ADD4 (--1-$unique_storage@U-$resource_policy@PEAU_ACL@@$$A6AXPEAU1@@_E$1-FreePoolWithTag@-$pool_helper.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1?FreePoolWithTag@?$pool_helpers@PEAU_KEY_BASIC_INFORMATION@@$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C006AE40 (-reset@-$unique_storage@U-$resource_policy@PEAU_KEY_BASIC_INFORMATION@@$$A6AXPEAU1@@_E$1-FreePoo.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::pool_helpers<_ACL *,1265072196>::FreePoolWithTag(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4B677844u);
}
