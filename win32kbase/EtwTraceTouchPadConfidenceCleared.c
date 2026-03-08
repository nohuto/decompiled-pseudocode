/*
 * XREFs of EtwTraceTouchPadConfidenceCleared @ 0x1C0164240
 * Callers:
 *     ApiSetEtwTraceTouchPadConfidenceCleared @ 0x1C0244008 (ApiSetEtwTraceTouchPadConfidenceCleared.c)
 * Callees:
 *     McTemplateK0qtt_EtwWriteTransfer @ 0x1C016764C (McTemplateK0qtt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceCleared(int a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0qtt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3);
  return result;
}
