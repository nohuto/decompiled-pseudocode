/*
 * XREFs of McTemplateK0qqq_EtwWriteTransfer @ 0x1C0060C48
 * Callers:
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0014870 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     ndisNotifyDevicePowerStateChange @ 0x1C0014CCC (ndisNotifyDevicePowerStateChange.c)
 *     ?ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATUS_INDICATION@@HPEBXK@Z @ 0x1C001BDCC (-ndisWriteWmiStatusIndication@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@PEBU_NDIS_STATU.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002AB2C (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003F9BC (-ndisNotifyWmiAdapterArrival@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C0099170 (NdisReEnumerateProtocolBindings.c)
 *     NdisCoDeleteVc @ 0x1C00B9A00 (NdisCoDeleteVc.c)
 *     ?ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAU_DRIVER_OBJECT@@KK@Z @ 0x1C010AD68 (-ndisValidateMiniportDriverCharacteristicsEntryPoints@@YAHPEAU_NDIS_MINIPORT_DRIVER_CHARACTERIST.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012E1DC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     NdisMAllocateMapRegisters @ 0x1C0137120 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x1C0137CD0 (NdisMRegisterDmaChannel.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01382CC (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C005E50C (McGenEventWrite_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall McTemplateK0qqq_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6)
{
  _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v8 = &v14;
  v9 = 4LL;
  v10 = &a5;
  v12 = &a6;
  v11 = 4LL;
  v13 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, a2, a3, 4u, &v7);
}
