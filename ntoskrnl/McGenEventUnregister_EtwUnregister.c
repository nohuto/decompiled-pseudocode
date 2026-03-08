/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1405D11EC
 * Callers:
 *     CarLoggingExit @ 0x1405D1050 (CarLoggingExit.c)
 * Callees:
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !EtwProvider_Context[0] )
    return 0;
  result = EtwUnregister(EtwProvider_Context[0]);
  EtwProvider_Context[0] = 0LL;
  return result;
}
