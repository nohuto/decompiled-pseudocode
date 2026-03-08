/*
 * XREFs of EtwTraceFlipManagerContentFlip @ 0x1C01626D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxxq_EtwWriteTransfer @ 0x1C0165F40 (McTemplateK0pxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerContentFlip(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pxxq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
