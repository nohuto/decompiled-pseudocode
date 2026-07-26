/*
 * XREFs of ?ndisMRawInvokeCancelOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0070DDC
 * Callers:
 *     ?ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z @ 0x1C00AD020 (-ndisMpHookInvokeCancelOidRequestHandler@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMRawInvokeCancelOidRequest(struct _NDIS_MINIPORT_BLOCK *a1, void *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rsi

  DriverHandle = a1->DriverHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF4u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  DriverHandle->UnhookedCharacteristics.__ptr_.__value_->CancelOidRequestHandler(a1->MiniportAdapterContext, a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xF5u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
}
