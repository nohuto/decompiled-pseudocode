/*
 * XREFs of EtwTraceDCompDeferBatchEvent @ 0x1C0099720
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qpqxxq_EtwWriteTransfer @ 0x1C01663EC (McTemplateK0qpqxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceDCompDeferBatchEvent(int a1, int a2, int a3, char a4, __int64 a5, char a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qpqxxq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
