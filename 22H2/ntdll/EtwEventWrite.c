/*
 * XREFs of EtwEventWrite @ 0x180050300
 * Callers:
 *     SbSelectProcedure @ 0x18003E0E0 (SbSelectProcedure.c)
 *     EtwEventWriteEndScenario @ 0x18004FD30 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x1800518D0 (RtlSetLastWin32Error.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180061618 (LdrpLogDeprecatedDllEtwEvent.c)
 *     EtwEventWriteStartScenario @ 0x18008A3D0 (EtwEventWriteStartScenario.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CB730 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CB7B8 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CF3C0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x180108738 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x1801087B4 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x1801137A8 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180050388 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
