/*
 * XREFs of EtwTraceFlipManagerPresentIFlipSubmitted @ 0x1C0162E90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C016554C (McTemplateK0qxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentIFlipSubmitted(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, (unsigned int)&FlipManagerPresentIFlipSubmitted, a3, a1, a2, a3);
  return result;
}
