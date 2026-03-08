/*
 * XREFs of EtwTraceTokenStateChangedEvent @ 0x1C0009AA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqqxqttxxt_EtwWriteTransfer @ 0x1C00EE86C (McTemplateK0pqqxqttxxt_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTokenStateChangedEvent(
        int a1,
        int a2,
        int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0pqqxqttxxt_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return result;
}
