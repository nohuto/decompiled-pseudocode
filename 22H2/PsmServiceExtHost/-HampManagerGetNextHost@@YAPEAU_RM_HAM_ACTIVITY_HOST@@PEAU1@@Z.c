/*
 * XREFs of ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18007C7F0
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180042E30 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180043AF0 (-HampManagerSystemStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1800441F0 (-HampManagerTracingControlCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8F8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180082E34 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x180082EB8 (-HampPdcUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_HAM_ACTIVITY_HOST *__fastcall HampManagerGetNextHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  return HampHostEnumerateHostsInNode(
           (struct _HAM_RC_TREE_NODE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL)
                                                                            + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                               + 120)
                                                   + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                      - 40),
           0,
           (__int64)a1);
}
