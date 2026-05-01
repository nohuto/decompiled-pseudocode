/*
 * XREFs of ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x1800091CC
 * Callers:
 *     CrmActivityWindowClosedReasonSubscribe @ 0x1800091C0 (CrmActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x180004108 (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmpActivityWindowClosedReasonSubscribe(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  int v6; // esi
  int Pointer; // ebx

  v6 = 1;
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                            8u,
                            0LL,
                            *((_QWORD *)a1 + 1),
                            *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
                            (char *)a1 + 88).Pointer;
  if ( Pointer >= 0 )
  {
    *((_QWORD *)a1 + 9) = a2;
    *((_QWORD *)a1 + 10) = a3;
    Pointer = RtlSubscribeWnfStateChangeNotification(
                (char *)a1 + 96,
                *((_QWORD *)a1 + 11),
                0LL,
                CrmpActivityWindowClosedWNFCallback,
                a1,
                0LL,
                0,
                0);
    if ( Pointer >= 0 )
    {
      v6 = 0;
      Pointer = 0;
    }
  }
  if ( v6 )
    CrmpActivityWindowClosedReasonUnsubscribe(a1);
  return (unsigned int)Pointer;
}
