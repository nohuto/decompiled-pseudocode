/*
 * XREFs of RtlFlsAlloc @ 0x180075860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsAlloc(PFLS_CALLBACK_FUNCTION Callback, PULONG FlsIndex)
{
  return RtlpFlsAlloc(
           (struct _RTLP_FLS_CONTEXT *)Callback,
           (struct _RTLP_FLS_THREAD_CONTEXT *)FlsIndex,
           (void (*)(void *))Callback,
           FlsIndex);
}
