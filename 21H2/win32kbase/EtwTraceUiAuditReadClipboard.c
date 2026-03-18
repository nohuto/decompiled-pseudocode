/*
 * XREFs of EtwTraceUiAuditReadClipboard @ 0x1C00CB780
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qmqmq_EtwWriteTransfer @ 0x1C00CB6CC (McTemplateK0qmqmq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceUiAuditReadClipboard(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000000LL) != 0 )
    return McTemplateK0qmqmq_EtwWriteTransfer(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
