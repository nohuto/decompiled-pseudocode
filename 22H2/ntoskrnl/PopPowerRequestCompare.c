/*
 * XREFs of PopPowerRequestCompare @ 0x14069BE60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerRequestCompare(_RTL_AVL_TABLE *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // edx

  v3 = a2[2];
  result = 0LL;
  v5 = a3[2];
  if ( v3 >= v5 )
  {
    LOBYTE(result) = v3 <= v5;
    return (unsigned int)(result + 1);
  }
  return result;
}
