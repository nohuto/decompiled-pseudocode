/*
 * XREFs of ?ReplaceDescendantPermissionsWithInherited@SearchSettingsHelper@SearchSettings@@CAJPEAUHKEY__@@@Z @ 0x1800A8700
 * Callers:
 *     ?AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z @ 0x1800A1F80 (-AddAceToKeyRecursively@SearchSettingsHelper@SearchSettings@@CAJPEBGPEAU_EXPLICIT_ACCESS_W@@@Z.c)
 * Callees:
 *     ?SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z @ 0x1800A99B4 (-SetUnprotectedDaclRecursive@SearchSettingsHelper@SearchSettings@@CAXPEAUHKEY__@@PEAU_ACL@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABD88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SearchSettings::SearchSettingsHelper::ReplaceDescendantPermissionsWithInherited(HKEY a1)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _ACL pAcl; // [rsp+38h] [rbp+10h] BYREF

  if ( !InitializeAcl(&pAcl, 8u, 2u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x291,
             (unsigned int)"onecoreuap\\internal\\shell\\inc\\SearchSettingsHelper.h",
             v2);
  SearchSettings::SearchSettingsHelper::SetUnprotectedDaclRecursive(a1, &pAcl);
  return 0LL;
}
