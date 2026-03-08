/*
 * XREFs of HalpDmaGetRemappingInformation @ 0x1408613F8
 * Callers:
 *     HaliQuerySystemInformation @ 0x140A85470 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuGetSecurityPolicy @ 0x140303164 (HalpIommuGetSecurityPolicy.c)
 */

__int64 __fastcall HalpDmaGetRemappingInformation(int a1, int *a2)
{
  int SecurityPolicy; // eax
  bool *v3; // r8
  __int64 result; // rax
  int v5; // ecx

  if ( a1 )
  {
    SecurityPolicy = HalpIommuGetSecurityPolicy();
    *v3 = SecurityPolicy != 0;
    result = 0LL;
    v5 = 1;
  }
  else
  {
    result = 3221225507LL;
    v5 = 0;
  }
  *a2 = v5;
  return result;
}
