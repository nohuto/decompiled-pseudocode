/*
 * XREFs of EtwTraceFlipManagerStartCompleteToken @ 0x1C014DEA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxtt_EtwWriteTransfer @ 0x1C00D8644 (McTemplateK0qxtt_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceFlipManagerStartCompleteToken(__int64 a1, char a2, __int64 a3, char a4)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxtt_EtwWriteTransfer(a1, &FlipManagerStartCompleteToken, a3, a1, a2, a3, a4);
  return result;
}
