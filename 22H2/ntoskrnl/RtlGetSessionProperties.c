/*
 * XREFs of RtlGetSessionProperties @ 0x1409138E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall RtlGetSessionProperties(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  if ( (_DWORD)a1 == -1 )
    return (unsigned int)-1073741811;
  v2 = 0;
  if ( !a2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = 0;
    *a2 = *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(a1, (__int64)a2) + 141) + 24LL) == a1;
  }
  return v2;
}
