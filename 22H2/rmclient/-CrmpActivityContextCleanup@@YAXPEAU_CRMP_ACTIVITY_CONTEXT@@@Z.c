/*
 * XREFs of ?CrmpActivityContextCleanup@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180003D60
 * Callers:
 *     CrmActivityFree @ 0x180003D20 (CrmActivityFree.c)
 *     CrmActivityAllocate @ 0x180003EF0 (CrmActivityAllocate.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004108 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

void __fastcall CrmpActivityContextCleanup(struct _CRMP_ACTIVITY_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  CrmpActivityWindowClosedReasonUnsubscribe(a1);
  v2 = *((_QWORD *)a1 + 6);
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)*((_QWORD *)a1 + 8);
  if ( v3 )
    CloseHandle(v3);
  if ( *((_QWORD *)a1 + 1) != -1LL )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 4u, 0LL);
}
