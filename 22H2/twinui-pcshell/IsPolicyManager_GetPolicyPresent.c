/*
 * XREFs of IsPolicyManager_GetPolicyPresent @ 0x180092A00
 * Callers:
 *     ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A34C (-IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800948A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsPolicyManager_GetPolicyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18064F73C == 1 )
    return 1;
  if ( dword_18064F73C == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"@B", &v1) < 0 )
    return 0;
  result = v1;
  dword_18064F73C = 2 - (v1 != 0);
  return result;
}
