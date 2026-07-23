/*
 * XREFs of RtlSetActiveConsoleId @ 0x14078EC20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 */

unsigned __int64 __fastcall RtlSetActiveConsoleId(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 result; // rax

  v2 = a1;
  if ( PsIsCurrentThreadInServerSilo(a1, a2) )
  {
    result = (unsigned __int64)PsGetCurrentServerSiloGlobals(v4, v3);
    *(_DWORD *)(*(_QWORD *)(result + 1128) + 4LL) = v2;
  }
  else
  {
    result = v2;
    MEMORY[0xFFFFF780000002D8] = v2;
  }
  return result;
}
