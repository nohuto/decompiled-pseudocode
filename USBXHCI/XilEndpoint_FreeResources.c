/*
 * XREFs of XilEndpoint_FreeResources @ 0x1C0039144
 * Callers:
 *     XilEndpoint_Create @ 0x1C000B114 (XilEndpoint_Create.c)
 *     Endpoint_EvtEndpointCleanupCallback @ 0x1C003A520 (Endpoint_EvtEndpointCleanupCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilEndpoint_FreeResources(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_BYTE *)(a1 + 24) )
    *(_QWORD *)(a1 + 8) = 0LL;
  else
    *(_QWORD *)a1 = 0LL;
  return result;
}
