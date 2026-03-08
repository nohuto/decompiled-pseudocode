/*
 * XREFs of McGenEventRegister_EtwRegister @ 0x1C002CAF8
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C002C2B8 (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister_EtwRegister(
        const _GUID *CallbackContext,
        void (__fastcall *RegHandle)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *ProviderId,
        unsigned __int64 *EnableCallback)
{
  NTSTATUS result; // eax

  result = 0;
  if ( !*EnableCallback )
    return EtwRegister(&KMDF_PERF_PROVIDER, (PETWENABLECALLBACK)McGenControlCallbackV2, ProviderId, EnableCallback);
  return result;
}
