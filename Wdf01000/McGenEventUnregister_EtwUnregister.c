/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1C002CB2C
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C002C154 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister_EtwUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
    return 0;
  result = EtwUnregister(KMDF_PERF_PROVIDER_Context.RegistrationHandle);
  KMDF_PERF_PROVIDER_Context.RegistrationHandle = 0LL;
  return result;
}
