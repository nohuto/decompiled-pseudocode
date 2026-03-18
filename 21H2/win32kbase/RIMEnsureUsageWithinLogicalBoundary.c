/*
 * XREFs of RIMEnsureUsageWithinLogicalBoundary @ 0x1C01AD874
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01B00C4 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMEnsureUsageWithinLogicalBoundary(__int64 a1)
{
  int v1; // r9d
  int v2; // r10d
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 52);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 52);
    v3 = 1 << (*(_WORD *)(a1 + 56) - 1);
    if ( (v3 & v2) != 0 )
      v4 = v2 | -v3;
    else
      v4 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v4;
  }
  if ( v4 < v1 )
  {
    *(_DWORD *)(a1 + 52) = v1;
    v4 = v1;
  }
  result = *(unsigned int *)(a1 + 36);
  if ( v4 > (int)result )
    *(_DWORD *)(a1 + 52) = result;
  return result;
}
