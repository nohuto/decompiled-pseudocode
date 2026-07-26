/*
 * XREFs of ?ndisMInvokeCheckForHang@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F9960
 * Callers:
 *     ?ndisQueuedCheckForHang@@YAXPEAX@Z @ 0x1C00093E0 (-ndisQueuedCheckForHang@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall ndisMInvokeCheckForHang(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned __int8 v3; // al
  unsigned __int8 v4; // di
  char v6[4]; // [rsp+30h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xEAu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  v3 = DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx(a1->MiniportAdapterContext);
  v4 = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v6 = v3;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x11u,
      0xEBu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      *(_DWORD *)v6);
  }
  return v4;
}
