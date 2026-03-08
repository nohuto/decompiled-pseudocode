/*
 * XREFs of EtwTraceFlipManagerStartCompleteToken @ 0x1C01637C0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxttttt_EtwWriteTransfer @ 0x1C016776C (McTemplateK0qxttttt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerStartCompleteToken(int a1, int a2, int a3, char a4, char a5, char a6, char a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qxttttt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
