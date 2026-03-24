/*
 * XREFs of EtwTraceFlipManagerStartCompleteToken @ 0x1C0122250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0x_EtwWriteTransfer @ 0x1C01273D8 (McTemplateK0x_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceFlipManagerStartCompleteToken(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0x_EtwWriteTransfer(a1, &FlipManagerStartCompleteToken, a3, a1);
  return result;
}
