/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x1C000B198
 * Callers:
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1344);
}
