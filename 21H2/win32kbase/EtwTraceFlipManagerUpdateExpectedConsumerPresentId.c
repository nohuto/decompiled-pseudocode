/*
 * XREFs of EtwTraceFlipManagerUpdateExpectedConsumerPresentId @ 0x1C00D8360
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxq_EtwWriteTransfer @ 0x1C00D85C4 (McTemplateK0qxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerUpdateExpectedConsumerPresentId(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxq_EtwWriteTransfer(
             a1,
             (unsigned int)&FlipManagerUpdateExpectedConsumerPresentId,
             a3,
             a1,
             a2,
             a3);
  return result;
}
