/*
 * XREFs of XilEndpoint_ReleaseBuffer @ 0x1C0039234
 * Callers:
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C003A520 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilEndpoint_ReleaseBuffer(__int64 a1, __int64 a2)
{
  CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)a1 + 120LL), a2);
}
