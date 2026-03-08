/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x14095C708
 * Callers:
 *     PiDevCfgEnforceDevicePolicy @ 0x140875F3C (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1403C0C9C (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, const WCHAR *a2, bool *a3)
{
  int v4; // ebx
  NTSTATUS RegistryValue; // eax
  unsigned int *v6; // rcx
  unsigned int v7; // edi
  unsigned int *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = 0;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1, a2, 0, &v9);
  v6 = v9;
  v7 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryDword((__int64)v9) )
      v4 = *(unsigned int *)((char *)v6 + v6[2]);
    *a3 = v4 == 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
