/*
 * XREFs of PnpProcessTargetDeviceEvent @ 0x140681D34
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406892C0 (PnpDeviceEventWorker.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14055EEE8 (McTemplateK0z_EtwWriteTransfer.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 */

__int64 __fastcall PnpProcessTargetDeviceEvent(__int64 *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v1 = 0;
  v2 = *a1;
  v4 = *(_QWORD *)(*a1 + 152);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  PiPnpRtlBeginOperation(&P);
  v7 = (_QWORD *)(v2 + 112);
  v8 = *(_QWORD *)(v2 + 112) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(v2 + 120) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
  if ( !v8 )
    goto LABEL_18;
  v9 = *v7 - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
  if ( *v7 == *(_QWORD *)&GUID_DEVICE_EJECT.Data1 )
    v9 = *(_QWORD *)(v2 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
  if ( v9 )
  {
    v10 = *v7 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( *v7 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
      v10 = *(_QWORD *)(v2 + 120) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( v10 )
    {
      memcmp(v7, &GUID_DEVICE_NOOP, 0x10uLL);
      v1 = 0;
    }
    else
    {
      PiUEventNotifyUserMode(v2);
    }
  }
  else
  {
LABEL_18:
    if ( (byte_140C0E10B & 8) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        (__int64)v7,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Start,
        v6,
        *(const wchar_t **)(v5 + 48));
    v1 = PnpProcessQueryRemoveAndEject(a1);
    if ( (byte_140C0E10B & 8) != 0 )
      McTemplateK0z_EtwWriteTransfer(
        v12,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Stop,
        v13,
        *(const wchar_t **)(v5 + 48));
  }
  if ( P )
    PiPnpRtlEndOperation(P);
  return v1;
}
