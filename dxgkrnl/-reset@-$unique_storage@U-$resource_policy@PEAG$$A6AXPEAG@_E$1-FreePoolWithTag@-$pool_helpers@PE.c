/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1C00228B0
 * Callers:
 *     DpiPdoHandleQueryDeviceText @ 0x1C0214910 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     ?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAXPEAG@Z @ 0x1C0065EF0 (-FreePoolWithTag@-$pool_helpers@PEAG$0A@@details@wil@@SAXPEAG@Z.c)
 */

__int64 __fastcall _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax

  if ( *a1 )
    result = wil::details::pool_helpers<unsigned short *,0>::FreePoolWithTag();
  *a1 = a2;
  return result;
}
