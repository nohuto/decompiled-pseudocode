/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C0117BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018F40 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0019A3C (-ndisReferenceMiniportNoCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A1C8 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002AB2C (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C006D414 (-ndisFreeOpenBlock@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0071AB8 (-ndisRemoveOpenFromGlobalList@@YAEPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0120B1C (-ndisInvokeCloseAdapterComplete@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall ndisMQueuedFinishClose(struct _NDIS_OPEN_BLOCK *P)
{
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rax
  int v4; // edx
  int v5; // r9d
  struct _KEVENT *CloseCompleteEvent; // rcx
  struct _KEVENT *UnsolicitedUnbindEvent; // rcx

  MiniportHandle = P->MiniportHandle;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0xFu,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)P,
      P->MiniportHandle);
  ndisReferenceMiniportNoCheck(MiniportHandle, 0x33u);
  ProtocolHandle = P->ProtocolHandle;
  if ( ProtocolHandle->MajorNdisVersion < 6u )
    ProtocolHandle->CloseAdapterCompleteHandler(P->ProtocolBindingContext, 0);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(MiniportHandle, 0x33u);
  if ( (P->OpenFlags & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(MiniportHandle, P->ProtocolHandle, 0);
  ndisDereferenceProtocol(P->ProtocolHandle, v4, 9u, v5);
  CloseCompleteEvent = P->CloseCompleteEvent;
  if ( CloseCompleteEvent )
    KeSetEvent(CloseCompleteEvent, 0, 0);
  UnsolicitedUnbindEvent = P->UnsolicitedUnbindEvent;
  if ( UnsolicitedUnbindEvent )
    KeSetEvent(UnsolicitedUnbindEvent, 0, 0);
  ndisRemoveOpenFromGlobalList(P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(MiniportHandle, 0x2Eu);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x10u,
      (struct _GUID *)&WPP_5f235f4f575e31f0149e7e439a696049_Traceguids,
      (char)P,
      MiniportHandle);
}
