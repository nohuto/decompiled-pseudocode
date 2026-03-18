/*
 * XREFs of SSHSupportEtwWrite @ 0x1403AD318
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085BA90 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpFlushBlockerDataCache @ 0x1409A1598 (SshpFlushBlockerDataCache.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall SSHSupportEtwWrite(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  return EtwWriteEx(SshpTraceHandle, a2, 0LL, 0, 0LL, 0LL, a4, a5);
}
