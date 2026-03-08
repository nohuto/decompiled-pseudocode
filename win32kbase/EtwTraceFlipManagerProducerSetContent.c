/*
 * XREFs of EtwTraceFlipManagerProducerSetContent @ 0x1C0163710
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qppq_EtwWriteTransfer @ 0x1C016634C (McTemplateK0qppq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerProducerSetContent(int a1, int a2, int a3, char a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qppq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4);
  return result;
}
