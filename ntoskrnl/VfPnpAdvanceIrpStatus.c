/*
 * XREFs of VfPnpAdvanceIrpStatus @ 0x140AE3B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPnpAdvanceIrpStatus(__int64 a1, unsigned int a2, int *a3)
{
  __int64 result; // rax
  int v4; // edx

  if ( a2 >= 0x100 )
    return 0LL;
  result = 1LL;
  v4 = ++*a3;
  if ( *a3 == 259 )
    v4 = 260;
  *a3 = v4;
  return result;
}
