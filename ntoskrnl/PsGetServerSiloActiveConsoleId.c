/*
 * XREFs of PsGetServerSiloActiveConsoleId @ 0x1405A148C
 * Callers:
 *     IopGetThreadActiveConsoleId @ 0x140944B3C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloActiveConsoleId(__int64 a1)
{
  _QWORD *v1; // rax

  v1 = &PspHostSiloGlobals;
  if ( a1 )
    v1 = *(_QWORD **)(a1 + 1488);
  return *(unsigned int *)(v1[165] + 4LL);
}
