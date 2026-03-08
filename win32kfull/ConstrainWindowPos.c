/*
 * XREFs of ConstrainWindowPos @ 0x1C01A74FC
 * Callers:
 *     ConstrainWindowSIZERECT @ 0x1C01A7538 (ConstrainWindowSIZERECT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConstrainWindowPos(int *a1, int *a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // ecx

  v2 = *a1;
  result = 0x7FFFLL;
  if ( *a1 <= 0x7FFF )
  {
    if ( v2 < -32768 )
      v2 = -32768;
  }
  else
  {
    v2 = 0x7FFF;
  }
  *a1 = v2;
  v4 = *a2;
  if ( *a2 <= 0x7FFF )
  {
    result = (unsigned int)v4;
    if ( v4 < -32768 )
      result = 4294934528LL;
  }
  *a2 = result;
  return result;
}
