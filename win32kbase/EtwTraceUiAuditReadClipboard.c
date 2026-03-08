/*
 * XREFs of EtwTraceUiAuditReadClipboard @ 0x1C0164BA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qmqmq_EtwWriteTransfer @ 0x1C016619C (McTemplateK0qmqmq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceUiAuditReadClipboard(int a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000000LL) != 0 )
    return McTemplateK0qmqmq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
