/*
 * XREFs of HUBHSM_IncrementingAndCheckingMailboxDataIndex @ 0x1C000A2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_IncrementingAndCheckingMailboxDataIndex(__int64 a1)
{
  _DWORD *v1; // rdx
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // eax
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 960);
  v2 = v1[675];
  ++v1[674];
  v3 = v2 + 1;
  v4 = v1[674];
  v1[675] = v3;
  if ( v4 >= v1[670] )
    return 2053LL;
  result = 2061LL;
  if ( (v3 & 0xF) == 0 )
    return 2053LL;
  return result;
}
