/*
 * XREFs of EtwTraceTimerDelayStatistics @ 0x1C01640B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqNR1qNR3_EtwWriteTransfer @ 0x1C0166530 (McTemplateK0qqNR1qNR3_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTimerDelayStatistics(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return McTemplateK0qqNR1qNR3_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7);
  return result;
}
