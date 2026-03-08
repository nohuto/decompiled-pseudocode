/*
 * XREFs of PsGetThreadServerSilo @ 0x1402637A0
 * Callers:
 *     EtwpTraceIo @ 0x14035E9C0 (EtwpTraceIo.c)
 *     EtwTracePageFault @ 0x14045EC72 (EtwTracePageFault.c)
 *     EtwpTraceIoInit @ 0x14045FC10 (EtwpTraceIoInit.c)
 *     EtwpTraceRedirectedIo @ 0x1405FC520 (EtwpTraceRedirectedIo.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140721450 (ObpReferenceCurrentDeviceMap.c)
 *     IopGetThreadActiveConsoleId @ 0x140944B3C (IopGetThreadActiveConsoleId.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 */

__int64 __fastcall PsGetThreadServerSilo(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 544) + 2160LL);
  else
    return PsGetEffectiveServerSilo(*(_QWORD *)(a1 + 1624));
}
