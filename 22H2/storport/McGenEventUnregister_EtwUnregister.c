/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C00341B8
 * Callers:
 *     RaDeleteDriver @ 0x1C007A168 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !StorPortEventProvider_Context )
    return 0;
  result = EtwUnregister(StorPortEventProvider_Context);
  StorPortEventProvider_Context = 0LL;
  return result;
}
