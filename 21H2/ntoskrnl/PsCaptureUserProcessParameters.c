/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1406C2AD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x1406068CC (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(_QWORD *a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo((__int64)a1, a2);
  return PspCaptureUserProcessParameters(a1, a2, 0LL, 3, CurrentServerSilo);
}
