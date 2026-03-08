/*
 * XREFs of EtwTraceFlipManagerContentRebind @ 0x1C0162700
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pxxttq_EtwWriteTransfer @ 0x1C0165FE0 (McTemplateK0pxxttq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerContentRebind(int a1, int a2, int a3, char a4, char a5, char a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pxxttq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
