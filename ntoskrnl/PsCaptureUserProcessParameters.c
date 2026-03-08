/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1407599C0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x140759A00 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0, 3, CurrentServerSilo);
}
