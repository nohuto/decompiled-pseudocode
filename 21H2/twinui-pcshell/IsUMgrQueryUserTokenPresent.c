/*
 * XREFs of IsUMgrQueryUserTokenPresent @ 0x180093A40
 * Callers:
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x1800A6DE4 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800948C0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsUMgrQueryUserTokenPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18064F820 == 1 )
    return 1;
  if ( dword_18064F820 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_18064F820 = 2 - (v1 != 0);
  return result;
}
