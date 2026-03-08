/*
 * XREFs of EtwTraceFlipManagerPresentSignaled @ 0x1C01633F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C016554C (McTemplateK0qxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerPresentSignaled(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(a1, (unsigned int)&FlipManagerPresentSignaled, a3, a1, a2, a3);
  return result;
}
