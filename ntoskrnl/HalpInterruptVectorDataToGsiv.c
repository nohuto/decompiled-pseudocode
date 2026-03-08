/*
 * XREFs of HalpInterruptVectorDataToGsiv @ 0x1403AD9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptVectorDataToGsiv(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    result = 3221225659LL;
    if ( *a1 != 3 )
      return 3221225473LL;
  }
  else
  {
    *a2 = a1[14];
  }
  return result;
}
