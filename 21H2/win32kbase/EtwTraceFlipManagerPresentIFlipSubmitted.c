/*
 * XREFs of EtwTraceFlipManagerPresentIFlipSubmitted @ 0x1C014D840
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C00D85C4 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerPresentIFlipSubmitted(__int64 a1, char a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, &FlipManagerPresentIFlipSubmitted, a3, a1, a2, a3);
  return result;
}
