/*
 * XREFs of WheapGetAllPolicyValues @ 0x14095E030
 * Callers:
 *     WheapWmiExecutePolicyManagementMethod @ 0x1405BE110 (WheapWmiExecutePolicyManagementMethod.c)
 * Callees:
 *     WheapGetPolicyValue @ 0x14095E074 (WheapGetPolicyValue.c)
 */

__int64 __fastcall WheapGetAllPolicyValues(_DWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // r9d
  int v6; // r9d
  __int64 v7; // r10

  if ( a2 < 0x34 )
    return 3221225507LL;
  *a1 = 13;
  v5 = 0;
  do
  {
    result = WheapGetPolicyValue(v5, a3);
    if ( (int)result < 0 )
      break;
    v5 = v6 + 1;
    a3 = v7 + 4;
  }
  while ( v5 < 0xD );
  return result;
}
