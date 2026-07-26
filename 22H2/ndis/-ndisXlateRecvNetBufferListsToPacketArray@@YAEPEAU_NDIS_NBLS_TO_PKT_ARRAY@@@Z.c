/*
 * XREFs of ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0075DD8
 * Callers:
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C00BB6FC (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BC5C0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z @ 0x1C00C4784 (-ndisIndicateXlatedPacketsToNdis5Protocols@@YAXPEAU_NDIS_NBL_RCV_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00748F0 (-ndisNblTrackerRecordEventInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEA.c)
 *     ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00759EC (-ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z.c)
 *     ?ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z @ 0x1C0075C7C (-ndisNetBufferToPacket@@YAHPEAU_NET_BUFFER@@EPEAPEAU_NDIS_PACKET@@@Z.c)
 */

char __fastcall ndisXlateRecvNetBufferListsToPacketArray(struct _NDIS_NBLS_TO_PKT_ARRAY *a1)
{
  struct _NET_BUFFER_LIST *Alignment; // rbx
  int v2; // r13d
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // r12
  char v7; // r15
  _DWORD *v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  unsigned int v11; // r8d
  __int64 v12; // rbp
  unsigned int Flags; // edx
  unsigned int v14; // ecx
  unsigned int v16; // [rsp+60h] [rbp+8h]

  Alignment = (struct _NET_BUFFER_LIST *)*((_QWORD *)a1 + 2);
  v2 = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v4 = *((_DWORD *)a1 + 2);
  v5 = 0LL;
  v6 = *(_QWORD *)a1;
  v7 = 1;
  v16 = v4;
  while ( Alignment && (unsigned int)v5 < v4 )
  {
    if ( (Alignment->Flags & 0x10) != 0 && (Alignment->NblFlags & 2) != 0 )
    {
      v8 = Alignment->NdisReserved[0];
      *(_QWORD *)(v6 + 8 * v5) = v8;
      v9 = (unsigned int)v5;
      v8[9] |= 0x4000u;
      if ( *(int *)ndisNblTrackerMode < 3 )
        goto LABEL_11;
      v10 = *(_QWORD *)(v6 + 8 * v5);
      v11 = 29;
      goto LABEL_10;
    }
    v9 = (unsigned int)v5;
    v2 = ndisNetBufferToPacket(Alignment->FirstNetBuffer, 0, (struct _NDIS_PACKET **)(v6 + 8 * v5));
    if ( v2 )
      break;
    if ( *(int *)ndisNblTrackerMode >= 3 )
    {
      v10 = *(_QWORD *)(v6 + 8 * v5);
      v11 = 25;
LABEL_10:
      ndisNblTrackerRecordEventInternal(Alignment, 0LL, v11, v10, 0);
    }
LABEL_11:
    v12 = *(_QWORD *)(v6 + 8 * v9);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 32) = *((_DWORD *)a1 + 3);
    *(_DWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 16) = 14;
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 72LL) = 0LL;
    ndisCopyNBLInfoToPacket((__int64)Alignment, v12, 2u);
    Flags = Alignment->Flags;
    if ( (Flags & 0x80u) != 0 )
    {
      *(_DWORD *)(v12 + 36) |= 0x100u;
      *(_BYTE *)(v12 + 41) |= 2u;
      *(_QWORD *)(*(unsigned __int16 *)(v12 + 42) + v12 + 72) = Alignment->SourceHandle;
      Flags = Alignment->Flags;
    }
    v14 = *(_DWORD *)(v12 + 36) | 0x80;
    if ( (Flags & 0x200) != 0 )
      v14 = *(_DWORD *)(v12 + 36) & 0xFFFFFF7F;
    *(_DWORD *)(v12 + 36) = v14 | 0x20000;
    v5 = (unsigned int)(v5 + 1);
    *(_QWORD *)(*(unsigned __int16 *)(*(_QWORD *)(v6 + 8 * v9) + 42LL) + *(_QWORD *)(v6 + 8 * v9) + 112LL) = Alignment;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
    v4 = v16;
  }
  *((_DWORD *)a1 + 8) = v5;
  *((_QWORD *)a1 + 2) = Alignment;
  if ( Alignment )
    *((_QWORD *)a1 + 3) = Alignment->FirstNetBuffer;
  if ( v2 )
  {
    if ( (_DWORD)v5 )
      return v7;
    return 0;
  }
  else if ( !Alignment )
  {
    return 0;
  }
  return v7;
}
