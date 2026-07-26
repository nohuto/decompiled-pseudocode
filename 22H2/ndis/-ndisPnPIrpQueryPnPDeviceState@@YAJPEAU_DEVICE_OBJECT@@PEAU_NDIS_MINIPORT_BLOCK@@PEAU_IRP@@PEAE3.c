/*
 * XREFs of ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039F68
 * Callers:
 *     ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510 (-ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  unsigned int PnPFlags; // eax

  PnPFlags = a2->PnPFlags;
  if ( (PnPFlags & 0x1000) != 0 )
  {
    a3->IoStatus.Information |= 2uLL;
    PnPFlags = a2->PnPFlags;
  }
  if ( (PnPFlags & 0x100) != 0 && (a2->WSyncFlags & 4) == 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x2Fu,
        (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
        a2);
    if ( (byte_1C00E71C2 & 0x20) != 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        (_DWORD)a1,
        (unsigned int)&QueryPnPDeviceStateFailed,
        (_DWORD)a2 + 4008,
        (_DWORD)a2 + 4008,
        a2->IfIndex,
        a2->NetLuid.Value,
        1);
    a3->IoStatus.Information |= 4uLL;
  }
  if ( a2->PagingPathCount )
    a3->IoStatus.Information |= 0x20uLL;
  a3->IoStatus.Status = 0;
  *a5 = 1;
  return 0LL;
}
