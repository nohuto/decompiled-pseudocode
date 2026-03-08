/*
 * XREFs of PopGetLegacyPowerRequestFlags @ 0x1402B8BEC
 * Callers:
 *     PoRegisterSystemState @ 0x14058B800 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

int __fastcall PopGetLegacyPowerRequestFlags(_DWORD *a1, int a2, int *a3)
{
  int result; // eax
  int v5; // r10d
  unsigned int v6; // r9d
  int v7; // ecx

  result = 0;
  v5 = 0x80000000;
  if ( a1 )
  {
    v6 = -2147483646;
    if ( !a1[10] )
      v6 = 0x80000000;
    v7 = v6 | 1;
    if ( !a1[11] )
      v7 = v6;
    v5 = v7 | 0x40;
    if ( !a1[12] )
      v5 = v7;
    result = (a2 ^ v5) & 0x7FFFFFFF;
  }
  if ( a3 )
    *a3 = v5;
  return result;
}
