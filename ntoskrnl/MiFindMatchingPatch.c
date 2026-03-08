/*
 * XREFs of MiFindMatchingPatch @ 0x140A34010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindMatchingPatch(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 16) )
  {
    if ( a1 != *(_QWORD *)a2 )
      return 1LL;
  }
  else if ( *(_DWORD *)(a1 + 120) != *(_DWORD *)(*(_QWORD *)a2 + 120LL)
         || *(_DWORD *)(a1 + 156) != *(_DWORD *)(*(_QWORD *)a2 + 156LL) )
  {
    return 1LL;
  }
  *(_QWORD *)(a2 + 8) = a1;
  return 0LL;
}
