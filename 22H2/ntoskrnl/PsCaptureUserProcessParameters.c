/*
 * XREFs of PsCaptureUserProcessParameters @ 0x1407ADC00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140289E70 (PsGetCurrentServerSilo.c)
 *     PspCaptureUserProcessParameters @ 0x1407ADC40 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PsCaptureUserProcessParameters(int a1, int a2)
{
  __int64 CurrentServerSilo; // rax

  CurrentServerSilo = PsGetCurrentServerSilo();
  return PspCaptureUserProcessParameters(a1, a2, 0, 3, CurrentServerSilo);
}
