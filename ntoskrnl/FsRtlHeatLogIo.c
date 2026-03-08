/*
 * XREFs of FsRtlHeatLogIo @ 0x14093CA50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x14053CCF4 (McTemplateK0xxxqq_EtwWriteTransfer.c)
 */

__int64 __fastcall FsRtlHeatLogIo(_DWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, const GUID *a5)
{
  __int64 v5; // r9
  unsigned int v6; // ebx

  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0;
  switch ( *(_BYTE *)v5 )
  {
    case 3:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 2) != 0 )
        McTemplateK0xxxqq_EtwWriteTransfer(
          MS_StorageTiering_Provider_Context,
          (const EVENT_DESCRIPTOR *)TieredStorage_HeatRead,
          a5,
          *a3,
          a3[1],
          *(_QWORD *)(v5 + 24),
          *(_DWORD *)(v5 + 8),
          *a1);
      break;
    case 4:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 4) != 0 )
        McTemplateK0xxxqq_EtwWriteTransfer(
          MS_StorageTiering_Provider_Context,
          (const EVENT_DESCRIPTOR *)TieredStorage_HeatWrite,
          a5,
          *a3,
          a3[1],
          *(_QWORD *)(v5 + 24),
          *(_DWORD *)(v5 + 8),
          *a1);
      break;
    case 0x12:
      if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 8) != 0 )
        McTemplateK0xxxqq_EtwWriteTransfer(
          MS_StorageTiering_Provider_Context,
          (const EVENT_DESCRIPTOR *)TieredStorage_HeatDelete,
          a5,
          *a3,
          a3[1],
          0LL,
          0,
          *a1);
      break;
    default:
      return (unsigned int)-1073741584;
  }
  return v6;
}
