/*
 * XREFs of ?IsEnterprisePolicyEnabled@ShellFeedsAvailabilityHelpers@@YAJPEAE@Z @ 0x18010A34C
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     IsPolicyManager_GetPolicyPresent @ 0x180092A00 (IsPolicyManager_GetPolicyPresent.c)
 */

__int64 __fastcall ShellFeedsAvailabilityHelpers::IsEnterprisePolicyEnabled(
        ShellFeedsAvailabilityHelpers *this,
        unsigned __int8 *a2)
{
  bool v2; // bl
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 1;
  *(_BYTE *)this = 1;
  if ( IsPolicyManager_GetPolicyPresent() )
  {
    v5 = 1;
    v6 = 2;
    if ( (int)PolicyManager_GetPolicy(L"Feeds", L"FeedsEnabled", &v5, &v7) >= 0 && *(_DWORD *)(v7 + 8) == 1 )
      v2 = *(_DWORD *)(v7 + 16) == 1;
    if ( v7 )
      PolicyManager_FreeGetPolicyData(v7);
  }
  *(_BYTE *)this = v2;
  return 0LL;
}
