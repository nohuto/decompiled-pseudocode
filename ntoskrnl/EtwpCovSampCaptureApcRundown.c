/*
 * XREFs of EtwpCovSampCaptureApcRundown @ 0x1409EDB90
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureApcRelease @ 0x1406009D4 (EtwpCovSampCaptureApcRelease.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRundown(__int64 a1)
{
  return EtwpCovSampCaptureApcRelease(a1 - 56);
}
