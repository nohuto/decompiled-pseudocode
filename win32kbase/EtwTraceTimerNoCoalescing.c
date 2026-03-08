/*
 * XREFs of EtwTraceTimerNoCoalescing @ 0x1C0164110
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0szzqqq_EtwWriteTransfer @ 0x1C0167998 (McTemplateK0szzqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTimerNoCoalescing(int a1, __int64 a2, __int64 a3, char a4, char a5, char a6)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000) != 0 )
    return McTemplateK0szzqqq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6);
  return result;
}
