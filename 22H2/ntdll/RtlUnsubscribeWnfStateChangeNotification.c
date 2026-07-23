/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180063AF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180063BAC (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
