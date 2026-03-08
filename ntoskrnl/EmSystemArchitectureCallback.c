/*
 * XREFs of EmSystemArchitectureCallback @ 0x140939D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmSystemArchitectureCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6)
{
  __int64 result; // rax

  result = 1LL;
  if ( a6 == 1 || a5 )
  {
    result = 2LL;
    if ( *a5 != (unsigned __int16)KeProcessorArchitecture )
      return 0LL;
  }
  return result;
}
