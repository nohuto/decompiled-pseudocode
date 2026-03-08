/*
 * XREFs of XilEndpoint_AcquireBuffer @ 0x1C001B9F0
 * Callers:
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B610 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C003A7B4 (Endpoint_OnCancelEndpointConfigure.c)
 *     Endpoint_OnResetEndpointConfigure @ 0x1C003AD30 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 * Callees:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C001BAFC (XilCommonBuffer_AcquireBufferEx.c)
 */

__int64 __fastcall XilEndpoint_AcquireBuffer(_BYTE *a1, int a2, int a3, int a4)
{
  return XilCommonBuffer_AcquireBufferEx(
           *(_QWORD *)(*(_QWORD *)a1 + 120LL),
           a2,
           a3,
           a4,
           (unsigned int)(a1[1344] != 0) + 1);
}
