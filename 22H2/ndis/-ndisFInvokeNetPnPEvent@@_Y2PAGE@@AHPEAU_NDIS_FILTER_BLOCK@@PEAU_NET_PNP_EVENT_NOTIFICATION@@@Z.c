/*
 * XREFs of ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FC368
 * Callers:
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00159AC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeNetPnPEvent(struct _NDIS_FILTER_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rbp
  _NET_PNP_EVENT_CODE NetEvent; // esi
  int v6; // eax
  unsigned int v7; // edi
  char v9[4]; // [rsp+30h] [rbp-28h]
  char v10[4]; // [rsp+38h] [rbp-20h]

  FilterDriver = a1->FilterDriver;
  NetEvent = a2->NetPnPEvent.NetEvent;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = a2->NetPnPEvent.NetEvent;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Eu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      *(_DWORD *)v9);
  }
  v6 = FilterDriver->DefaultFilterCharacteristics.NetPnPEventHandler(a1->FilterModuleContext, a2);
  v7 = v6;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = v6;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x6Fu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      NetEvent,
      *(_DWORD *)v10);
  }
  return v7;
}
