/*
 * XREFs of CsrFreeCaptureBuffer @ 0x180008970
 * Callers:
 *     CsrpClientConnectToServer @ 0x1800088AC (CsrpClientConnectToServer.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall CsrFreeCaptureBuffer(PVOID BaseAddress)
{
  LOGICAL result; // eax

  if ( !LdrpIsSecureProcess )
    return RtlFreeHeap(CsrPortHeap, 0, BaseAddress);
  return result;
}
