/*
 * XREFs of SSHSupportEtwWrite @ 0x1403B5B68
 * Callers:
 *     SshpFlushBlockerDataCache @ 0x140807088 (SshpFlushBlockerDataCache.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
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
