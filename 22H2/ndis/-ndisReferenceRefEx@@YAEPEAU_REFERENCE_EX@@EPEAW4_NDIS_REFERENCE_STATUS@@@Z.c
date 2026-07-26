/*
 * XREFs of ?ndisReferenceRefEx@@YAEPEAU_REFERENCE_EX@@EPEAW4_NDIS_REFERENCE_STATUS@@@Z @ 0x1C00187F4
 * Callers:
 *     ?ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z @ 0x1C0006998 (-ndisQueueRequestWorkItem@@YAHPEAXPEAU_NDIS_OID_REQUEST@@I@Z.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0017414 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C0018EB0 (-ndisGetLowerFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS.c)
 *     ?ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDIS_FPNP_REFTAG@@@Z @ 0x1C001ADC8 (-ndisGetHigherFilterWithPnpRef@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@W4_NDI.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001B924 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z @ 0x1C0026748 (-ndisReferenceFilterDriver@@YAEPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4_NDIS_LWFDRV_REFTAG@@@Z.c)
 *     ?ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C0026944 (-ndisReferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C002909C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     NdisAllocateIoWorkItem @ 0x1C00392F0 (NdisAllocateIoWorkItem.c)
 *     ?ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z @ 0x1C003A134 (-ndisReferenceDriver@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@W4_NDIS_MDRV_REFTAG@@@Z.c)
 *     ?ndisPktMonRegisterAllFilters@@YAXXZ @ 0x1C003FB20 (-ndisPktMonRegisterAllFilters@@YAXXZ.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C0060FB0 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0068D14 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0069F8C (-ndisQueueStackExpansionFallbackWorkItem@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0069FE0 (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     NdisFRestartFilter @ 0x1C006B6B0 (NdisFRestartFilter.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C00976F8 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z @ 0x1C009FB88 (-ndisQueueRestoreRequestsOnTop@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_LIST_ENTRY@@IE@Z.c)
 *     ?ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@PEAE@Z @ 0x1C009FF08 (-ndisRefNextFilterForOidCancellation@@YAPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU1@.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00AED60 (ndisDoCancelDirectOidRequest.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C00AEF00 (ndisFCancelDirectOidRequestInternal.c)
 *     NdisCancelDirectOidRequest @ 0x1C00AF1D0 (NdisCancelDirectOidRequest.c)
 *     ?ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C00AF384 (-ndisDoDirectOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BL.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0BB8 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 *     ndisMTimerObjectDpc @ 0x1C00BD590 (ndisMTimerObjectDpc.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 */

bool __fastcall ndisReferenceRefEx(PKSPIN_LOCK SpinLock, unsigned __int8 a2, enum _NDIS_REFERENCE_STATUS *a3)
{
  KIRQL v6; // al
  bool v7; // zf
  KIRQL v8; // si
  unsigned __int16 v9; // cx

  v6 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  v7 = *((_BYTE *)SpinLock + 10) == 0;
  *(_DWORD *)a3 = 1;
  v8 = v6;
  if ( v7 )
  {
    v9 = *((_WORD *)SpinLock + 4);
    if ( v9 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      *(_DWORD *)a3 = 2;
    }
    else
    {
      *((_WORD *)SpinLock + 4) = v9 + 1;
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2], a2);
      *(_DWORD *)a3 = 0;
    }
  }
  KeReleaseSpinLock(SpinLock, v8);
  return *(_DWORD *)a3 == 0;
}
