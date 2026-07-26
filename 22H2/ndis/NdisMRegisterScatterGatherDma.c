/*
 * XREFs of NdisMRegisterScatterGatherDma @ 0x1C0033A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z @ 0x1C0033B94 (-ndisMInitializeScatterGatherDmaInternal@@YAHPEAXEKK@Z.c)
 */

NDIS_STATUS __stdcall NdisMRegisterScatterGatherDma(
        NDIS_HANDLE MiniportAdapterHandle,
        PNDIS_SG_DMA_DESCRIPTION DmaDescription,
        PNDIS_HANDLE NdisMiniportDmaHandle)
{
  unsigned __int8 v6; // al
  unsigned int v7; // r8d
  unsigned int Flags; // eax
  NDIS_STATUS v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp-28h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x10u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
      (char)MiniportAdapterHandle,
      DmaDescription);
  *NdisMiniportDmaHandle = 0LL;
  v6 = *((_BYTE *)MiniportAdapterHandle + 32);
  if ( v6 < 6u )
  {
    v9 = -1073741637;
    goto LABEL_12;
  }
  if ( !DmaDescription->Header.Revision )
  {
    v9 = -1073676284;
    goto LABEL_12;
  }
  v7 = 2;
  if ( v6 > 6u || *((_BYTE *)MiniportAdapterHandle + 33) >= 0x32u )
  {
    Flags = DmaDescription->Flags;
    if ( (Flags & 0xFFFFFFFC) != 0 )
    {
      v9 = -1073741811;
      goto LABEL_12;
    }
    if ( (Flags & 2) != 0 )
      v7 = 3;
  }
  v9 = ndisMInitializeScatterGatherDmaInternal(
         MiniportAdapterHandle,
         DmaDescription->Flags & 1,
         v7,
         DmaDescription->MaximumPhysicalMapping);
  if ( !v9 )
  {
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x40u;
    v10 = *((_QWORD *)MiniportAdapterHandle + 63);
    *(_QWORD *)(v10 + 32) = DmaDescription->ProcessSGListHandler;
    *(_QWORD *)(v10 + 40) = DmaDescription->SharedMemAllocateCompleteHandler;
    *(_DWORD *)(v10 + 48) = DmaDescription->Flags;
    *NdisMiniportDmaHandle = (PVOID)v10;
    DmaDescription->ScatterGatherListSize = *(_DWORD *)(v10 + 56);
    *((_DWORD *)MiniportAdapterHandle + 30) |= 0x200u;
  }
LABEL_12:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_b95a1582eedd34623c72b3aa5f8cd533_Traceguids,
      (char)MiniportAdapterHandle,
      v12);
  }
  return v9;
}
