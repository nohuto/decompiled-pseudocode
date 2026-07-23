/*
 * XREFs of SepIsSModeEnabled @ 0x14020DDA0
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x140285D40 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14091CECC (SeSecurityModelQueryInformation.c)
 * Callees:
 *     SeCodeIntegrityQueryPolicyInformation @ 0x1405DC520 (SeCodeIntegrityQueryPolicyInformation.c)
 */

bool SepIsSModeEnabled()
{
  int v1; // [rsp+40h] [rbp+8h] BYREF
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  return (int)SeCodeIntegrityQueryPolicyInformation(205, 0, 0, (unsigned int)&v1, 4, (__int64)&v2) >= 0
      && (v1 & 0xA0000000) != 0;
}
