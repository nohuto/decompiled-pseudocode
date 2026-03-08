/*
 * XREFs of RtlpEcReadSkuUpdateManagementGroup @ 0x14040BD04
 * Callers:
 *     RtlIsFeatureEnabledForEnterprise @ 0x14040BC10 (RtlIsFeatureEnabledForEnterprise.c)
 * Callees:
 *     ZwQueryLicenseValue @ 0x140414ED0 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpEcReadSkuUpdateManagementGroup(bool *a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-10h] BYREF
  int v4; // [rsp+58h] [rbp+18h] BYREF
  int v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF

  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3[1] = L"UpdatePolicy-UpdateManagementGroup";
  v3[0] = 4587588LL;
  result = ZwQueryLicenseValue(v3, &v5, &v6, 4LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 == 4 && v5 == 4 )
      *a1 = v6 == 0;
    else
      return 3221225508LL;
  }
  return result;
}
