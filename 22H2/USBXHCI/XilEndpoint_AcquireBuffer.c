/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C00164E4
 * Callers:
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C0016620 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C00387A8 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C0038D28 (Endpoint_OnResetEndpointConfigure.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C00165F0 (XilCommonBuffer_AcquireBufferEx.c)
 */

__int64 __fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, int a2, int a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1336] != 0) + 1);
}
