/*
 * XREFs of SSHSupportEtwWrite @ 0x1403A7D38
 * Callers:
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140857DB0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpFlushBlockerDataCache @ 0x14099E508 (SshpFlushBlockerDataCache.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
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
