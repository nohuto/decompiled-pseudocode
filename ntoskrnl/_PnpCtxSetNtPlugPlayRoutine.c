/*
 * XREFs of _PnpCtxSetNtPlugPlayRoutine @ 0x14081BFE4
 * Callers:
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxSetNtPlugPlayRoutine(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a2 >= 6 )
    return (unsigned int)-1073741811;
  else
    _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)&PiPnpRtlCtx + 8LL * a2 + 248), a3);
  return v3;
}
